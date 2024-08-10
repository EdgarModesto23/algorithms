#include "main.hpp"
#include <set>
bool leetcode::Solution::containsDuplicate(std::vector<int> &nums) {
  std::set<int> duplicates{};

  for (auto i : nums) {
    if (duplicates.contains(i)) {
      return true;
    }
    duplicates.insert(i);
  }
  return false;
}
