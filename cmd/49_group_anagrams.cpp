#include "main.hpp"
#include <algorithm>

std::vector<std::vector<std::string>>
leetcode::Solution::groupAnagrams(std::vector<std::string> &strs) {
  int curr_index{0};
  std::vector<std::vector<std::string>> res{};
  std::map<std::string, int> lookup{};

  for (auto str : strs) {
    auto copy{str};
    std::sort(copy.begin(), copy.end());
    if (lookup.contains(copy)) {
      res[lookup[copy]].push_back(str);
    } else {
      lookup[copy] = curr_index;
      res.push_back({str}); // Initialize a new group with the current string
      curr_index += 1;
    }
  }
  return res;
};
