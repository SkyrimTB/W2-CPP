#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <cmath>

int main() {
    // Original vector
    std::vector<double> original = {1.0, 2.0, 3.0, 4.0, 5.0};

    // Squaring function
    auto square = [](double x) { return x * x; };

    // Squared vector
    std::vector<double> squared(original.size());
    std::transform(original.begin(), original.end(), squared.begin(), square);

    // Print the squared vector
    std::cout << "Squared Vector: ";
    std::copy(squared.begin(), squared.end(), std::ostream_iterator<double>(std::cout, ", "));
    std::cout << std::endl;

    // Calculate the sum of squares
    double sum_of_squares = std::accumulate(squared.begin(), squared.end(), 0.0);

    // Calculate the distance from the origin
    double distance = std::sqrt(sum_of_squares);

    // Print the distance
    std::cout << "Distance from the origin: " << distance << std::endl;

    return 0;
}
