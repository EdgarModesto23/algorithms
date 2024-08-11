#include "main.hpp"
#include <iostream>
#include <ostream>
#include <string>
#include <vector>

using namespace algorithms;

int main(int argc, char *argv[]) {
  auto a = 'J';
  switch (a) {
  case 'A': {
    std::vector<int> unsorted_vector = {5, 3, 2, 6, 1, 4};
    std::vector result = insertionSort(unsorted_vector);
    for (int i : result)
      std::cout << i << std::endl;
    break;
  }

  case 'B': {
    std::vector<int> unsorted_vector = {5, 3, 2, 6, 1, 4};
    std::vector result = invertedInsertionSort(unsorted_vector);
    for (int i : result)
      std::cout << i << std::endl;
    break;
  }
  case 'C': {
    std::vector<int> sorted_vector = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    bool result = searchAlgorithms::binarySearch(sorted_vector, 10);
    std::cout << result << std::endl;
    break;
  }
  case 'D': {
    std::vector<int> unsorted_vector{4, 5, 3, 2, 1, 7};
    algorithms::bubbleSort(unsorted_vector);
    for (auto i : unsorted_vector) {
      std::cout << i << ", ";
    }
    std::cout << "\n";
    break;
  }
  case 'E': {
    std::vector<int> list{1, 2, 3, 4, 5, 6, 7, 8};
    auto result = leetcode::twoSum(list, 9);
    if (result.size() == 2) {
      std::cout << result[0] << " " << result[1] << "\n";
    }
  } break;
  case 'F': {
    std::map<int, int> memo{};
    auto result = leetcode::fib(10000, memo);
    std::cout << result << "\n";
    break;
  }
  case 'G': {
    std::vector<int> prices{1, 5, 8, 9, 10, 17, 17, 20, 24, 30};
    std::map<int, int> memo{};
    int res = leetcode::rod_cutting(10, prices, memo);
    std::cout << res << "\n";
    break;
  }
  case 'H': {
    leetcode::Solution sol;
    std::vector<std::vector<int>> grid = {{3, 2, 9, 2, 7},
                                          {6, 1, 8, 4, 2},
                                          {7, 5, 3, 2, 7},
                                          {2, 9, 4, 9, 6},
                                          {4, 3, 8, 2, 5}};
    int res = sol.numMagicSquaresInside(grid);
    std::cout << res << "\n";
    break;
  };
  case 'I': {
    leetcode::Solution sol;
    std::string s{"aacc"};
    std::string t{"ccac"};
    auto res = sol.isAnagram(s, t);
    std::cout << res << "\n";
    break;
  }
  case 'J': {
    leetcode::Solution sol;
    std::vector<std::string> strs{""};
    auto res{sol.groupAnagrams(strs)};
    for (auto i : res) {
      for (auto j : i) {
        std::cout << j << "\n";
      }
    }
  }
  default: {
    std::cout << "No parameters" << std::endl;
  }
  }

  return 0;
}
