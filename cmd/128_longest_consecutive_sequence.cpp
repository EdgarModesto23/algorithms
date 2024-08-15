#include <algorithm>
#include <main.hpp>
#include <unordered_set>

int leetcode::Solution::longestConsecutive(std::vector<int> &nums) {
  if (nums.size() == 0) {
    return 0;
  }
  int counter{1};
  std::unordered_set<int> nums_set(nums.begin(), nums.end());
  for (auto i : nums_set) {
    int internal{1};
    if (!(nums_set.contains(i - 1))) {
      int j{i};
      while (nums_set.contains(j + 1)) {
        ++internal;
        ++j;
      }
    }
    counter = std::max(counter, internal);
  }

  return counter;
}
