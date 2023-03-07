#pragma once

#include <random>
#include <utility>
#include <vector>

namespace strgen {

enum class charset {
  LOWERCASE = 1,
  UPPERCASE = 2,
  DIGITS = 4,
  ALL = 1 | 2 | 4
};

std::string random_string(size_t length, charset charsets = charset::ALL) {
  std::random_device device;
  std::mt19937 rnd(device());
  std::vector<std::pair<int, int>> ranges;
  auto buffer = new char[length + 1];
  buffer[length] = '\0';
  if ((int)charsets & 1)
    ranges.push_back({97, 122});
  if ((int)charsets & 2)
    ranges.push_back({65, 90});
  if ((int)charsets & 4)
    ranges.push_back({48, 57});
  for (size_t i = 0; i < length; i++) {
    auto range_index = rnd() % ranges.size();
    auto &[min_range, max_range] = ranges[range_index];
    buffer[i] = (char)((rnd() % (max_range - min_range + 1)) + min_range);
  }
  return buffer;
}

} // namespace strgen
