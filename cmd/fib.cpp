#include "main.hpp"

int leetcode::fib(int n, std::map<int, int> &memo) {
  if (auto search = memo.find(n); search != memo.end()) {
    return search->second;
  }
  if (n <= 2) {
    return 1;
  }
  memo.insert({n, leetcode::fib(n - 1, memo) + leetcode::fib(n - 2, memo)});
  return memo[n];
}
