#include "main.hpp"
#include <algorithm>
#include <map>

int leetcode::rod_cutting(int length, std::vector<int> prices,
                          std::map<int, int> &memo) {
  if (auto search = memo.find(length); search != memo.end()) {
    return search->second;
  }
  if (length == 0) {
    return 0;
  }
  int max = -1;
  for (auto i = 1; i <= length; ++i) {
    auto tmp = prices[i - 1] + rod_cutting(length - i, prices, memo);
    max = std::max(max, tmp);
  }
  memo.insert({length, max});
  return max;
}
