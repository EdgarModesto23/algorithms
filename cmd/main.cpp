#include "main.hpp"
#include <iostream>
#include <ostream>
#include <vector>

using namespace algorithms;

int main(int argc, char *argv[]) {
  auto a = *argv[1];
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
    auto result = leetcode::fib(20);
    std::cout << result << "\n";
    break;
  }
  default: {
    std::cout << "No parameters" << std::endl;
  }
  }

  return 0;
}
