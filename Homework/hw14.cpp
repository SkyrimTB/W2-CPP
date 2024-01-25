#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

int main() {
    // Original vector
    std::vector<double> original = {1.0, 2.0, 3.0, 4.0, 5.0};

    // Calculate the sum of squares using std::accumulate with a lambda function
    double sum_of_squares = std::accumulate(original.begin(), original.end(), 0.0,
                                            [](double accumulator, double value) {
                                                return accumulator + value * value;
                                            });

    // Calculate the Euclidean length (distance from the origin)
    double distance = std::sqrt(sum_of_squares);

    // Print the Euclidean length
    std::cout << "Euclidean length of the vector: " << distance << std::endl;

    return 0;
}
