#include <vector>
#include <numeric>
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <sstream>
#include <format>
using namespace std;

class PascalTriangle {
public:
    PascalTriangle(int size) : rows(size) {
        generateTriangle();
    }

    friend ostream& operator<<(ostream& os, const PascalTriangle& pt);

private:
    using Row = vector<int>;
    vector<Row> triangle;
    int rows;

    void generateTriangle() {
        Row previousRow = { 1 };
        for (int i = 0; i < rows; i++) {
            triangle.push_back(previousRow);
            previousRow = nextRow(previousRow);
        }
    }

    Row nextRow(const Row& row) {
        Row result;
        int previous = 0;
        for (auto elt : row) {
            result.push_back(previous + elt);
            previous = elt;
        }
        result.push_back(previous);
        return result;
    }

    int numDigits(int i) const {
        return to_string(i).size();
    }

    void printRow(ostream& os, const Row& row, int eltSize) const {
        for (auto elt : row) {
            os << format("{:^{}}", elt, eltSize) << " ";
        }
        os << endl;
    }
};

ostream& operator<<(ostream& os, const PascalTriangle& pt) {
    Row lastRow = pt.triangle[pt.rows - 1];
    int maxElement = *max_element(lastRow.begin(), lastRow.end());
    int eltSize = pt.numDigits(maxElement);

    for (int i = 0; i < pt.rows; i++) {
        string spaces((pt.rows - i - 1) * (eltSize + 1) / 2, ' ');
        os << spaces;
        pt.printRow(os, pt.triangle[i], eltSize);
    }
    return os;
}

int main() {
    constexpr int rows = 20;
    PascalTriangle triangle(rows);
    cout << triangle;
    return 0;
}
