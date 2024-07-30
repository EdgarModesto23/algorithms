#pragma once

#include <iostream>
#include <vector>

namespace algorithms {
std::vector<int> insertionSort(std::vector<int> A);
std::vector<int> invertedInsertionSort(std::vector<int> A);
} // namespace algorithms
namespace searchAlgorithms {
bool linearSearch(std::vector<int> A, int key);
bool binarySearch(std::vector<int> A, int key);
} // namespace searchAlgorithms
