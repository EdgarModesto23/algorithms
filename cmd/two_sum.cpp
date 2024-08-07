#include "headers/main.h"
#include <map>
#include <vector>

std::vector<int> leetcode::twoSum(std::vector<int> A, int target) {
  std::map<int, int> lookup;
  for (auto i = 0; i < A.size(); ++i) {
    int minus = target - A[i];
    if (auto search = lookup.find(minus); search != lookup.end()) {
      return std::vector<int>{i, search->second};
    }
    lookup.insert({A[i], i});
  }
  return std::vector<int>{};
}
