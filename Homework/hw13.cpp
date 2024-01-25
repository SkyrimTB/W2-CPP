#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

int main() {
    // Original vector
    std::vector<double> original = {1.0, 2.0, 3.0, 4.0, 5.0};

    // Calculate the dot product (sum of squares) using std::inner_product
    double sum_of_squares = std::inner_product(original.begin(), original.end(), original.begin(), 0.0);

    // Calculate the Euclidean length (distance from the origin)
    double distance = std::sqrt(sum_of_squares);

    // Print the Euclidean length
    std::cout << "Euclidean length of the vector: " << distance << std::endl;

    return 0;
}
