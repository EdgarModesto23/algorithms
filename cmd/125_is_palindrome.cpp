#include <algorithm>
#include <main.hpp>
#include <string>

bool leetcode::Solution::isPalindrome(std::string s) {
  std::transform(s.begin(), s.end(), s.begin(),
                 [](unsigned char c) { return std::tolower(c); });
  s.erase(std::remove_if(s.begin(), s.end(),
                         [](unsigned char c) { return !std::isalnum(c); }),
          s.end());
  for (int i = s.size() - 1; i >= 0; --i) {
    if (s[i] != s[(s.size() - (i + 1))]) {
      return false;
    }
  }
  return true;
}
