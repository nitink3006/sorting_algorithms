std::vector<int> getUnsortedVector() {
  return {5, 3, 2, 1, 4};
}

bool VERIFY_SORTED(const std::vector<int>& arr) {
  for (int i = 0; i < arr.size() - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      return false;
    }
  }
  return true;
}
#include <iostream>
#include <vector>

#include "algorithms.h"

using namespace std;

int main() {
  // Get the unsorted vector.
  std::vector<int> arr = getUnsortedVector();

  // Sort the vector using bubble sort.
  bubbleSort(arr);

  // Verify that the vector is sorted.
  bool isSorted = VERIFY_SORTED(arr);

  // Print the sorted vector.
  if (isSorted) {
    for (int i = 0; i < arr.size(); i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  } else {
    cout << "The vector is not sorted." << endl;
  }

  return 0;
}
