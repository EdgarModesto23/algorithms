#include "main.hpp"
#include <vector>
std::vector<int> leetcode::Solution::productExceptSelf(std::vector<int> &nums) {
  std::vector<int> res(nums.size(), 1);
  auto px{1};
  for (auto i = 0; i < nums.size(); ++i) {
    res[i] = px;
    px *= nums[i];
  }
  auto rpx{1};
  for (int i = nums.size() - 1; i >= 0; --i) {
    res[i] *= rpx;
    rpx *= nums[i];
  }

  return res;
}
