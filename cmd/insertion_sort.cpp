#include "headers/main.h"
#include <vector>

using namespace std;

std::vector<int> algorithms::insertionSort(std::vector<int> A) {
  for (int i = 1; i < int(A.size()); i++) {
    int key = A[i];
    int j = i - 1;
    while (i > 0 && A[j] > key) {
      A[j + 1] = A[j];
      j -= 1;
      A[j + 1] = key;
    }
  }
  return A;
}

void algorithms::bubbleSort(std::vector<int> &A) {
  for (std::size_t i = 0; i < A.size(); ++i) {
    for (auto j = 0; j < A.size() - 1 - i; ++j) {
      if (A[j] > A[j + 1]) {
        auto temp = A[j];
        A[j] = A[j + 1];
        A[j + 1] = temp;
      }
    }
  }
}

std::vector<int> algorithms::invertedInsertionSort(std::vector<int> A) {
  for (int i = 1; i < int(A.size()); i++) {
    int key = A[i];
    int j = i - 1;
    while (i > 0 && A[j] < key) {
      A[j + 1] = A[j];
      j -= 1;
      A[j + 1] = key;
    }
  }
  return A;
}
