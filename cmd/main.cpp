#include "headers/main.h"
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
  default: {
    std::cout << "No parameters" << std::endl;
  }
  }

  return 0;
}
