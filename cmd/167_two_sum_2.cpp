#include <main.hpp>
#include <vector>

std::vector<int> leetcode::Solution::twoSum2(std::vector<int> &numbers,
                                             int target) {
  int start = 0, end = numbers.size() - 1;
  while (start < end) {
    int sum = numbers[start] + numbers[end];
    if (sum == target) {
      return {start + 1,
              end + 1}; // assuming 1-based index as per problem statement
    } else if (sum < target) {
      start++;
    } else {
      end--;
    }
  }
  return {}; // return an empty vector if no solution found
}
