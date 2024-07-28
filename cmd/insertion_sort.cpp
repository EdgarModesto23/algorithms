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
