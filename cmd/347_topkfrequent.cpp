#include "main.hpp"
#include <algorithm>
#include <functional>
std::vector<int> leetcode::Solution::topKFrecuent(std::vector<int> &nums,
                                                  int k) {
  std::multimap<int, int, std::greater<int>> lookup{};
  std::sort(nums.begin(), nums.end());
  std::vector<int> res{};

  int count{1};
  for (auto i = 0; i < nums.size(); ++i) {
    if (nums[i] == nums[i + 1]) {
      ++count;
    } else {
      lookup.insert({count, nums[i]});
      count = 1;
    }
  }

  int lookup_count{0};
  for (auto i : lookup) {
    if (!(lookup_count < k)) {
      break;
    }
    res.push_back(i.second);
    ++lookup_count;
  }

  return res;
};
