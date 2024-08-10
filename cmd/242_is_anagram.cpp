#include "main.hpp"
bool leetcode::Solution::isAnagram(std::string s, std::string t) {
  if (s.size() != t.size()) {
    return false;
  }
  std::map<char, int> lookup{};
  for (auto i : s) {
    if (lookup.contains(i)) {
      lookup[i] += 1;
      continue;
    }
    lookup.insert({i, 1});
  }
  std::map<char, int> second_lookup{};
  for (auto i : t) {
    if (second_lookup.contains(i)) {
      second_lookup[i] += 1;
    } else {
      second_lookup.insert({i, 1});
    }
    if (!lookup.contains(i) || second_lookup[i] > lookup[i]) {
      return false;
    }
  }
  return true;
}
