#include <algorithm>
#include <vector>

double median_sort(std::vector<double> v) {
  if (v.empty())
    return 0.0; // Handle empty vector case

  std::sort(v.begin(), v.end());

  size_t n = v.size() / 2;
  return v.size() % 2 ? v[n] : (v[n - 1] + v[n]) / 2.0;
}

double median_partial_sort(std::vector<double> v) {
  if (v.empty())
    return 0.0;

  size_t n = v.size() / 2;
  std::partial_sort(v.begin(), v.begin() + n + 1, v.end());

  return v.size() % 2 ? v[n] : (v[n - 1] + v[n]) / 2.0;
}

double median_nth_element(std::vector<double> v) {
  if (v.empty())
    return 0.0;

  size_t n = v.size() / 2;
  std::nth_element(v.begin(), v.begin() + n, v.end());

  if (v.size() % 2) {
    return v[n];
  } else {
    double max_of_lower_half = *std::max_element(v.begin(), v.begin() + n);
    return (max_of_lower_half + v[n]) / 2.0;
  }
}
