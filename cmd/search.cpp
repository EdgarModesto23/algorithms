#include "headers/main.h"
#include <cmath>

bool searchAlgorithms::linearSearch(std::vector<int> A, int key) {
  for (int i = 0; i < A.size(); i++) {
    if (A[i] == key) {
      return true;
    }
  }
  return false;
}

bool searchAlgorithms::binarySearch(std::vector<int> A, int key) {
  int lo = 0;
  int hi = int(A.size());
  while (lo < hi) {
    int mid = (lo + floor(hi - lo) / 2);
    int val = A[mid];
    if (val == key) {
      return true;
    } else if (val > key) {
      hi = mid;
    } else {
      lo = mid + 1;
    }
  }
  return false;
}
