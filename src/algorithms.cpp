#include "algorithms.h"

#include <cassert>
#include <random>

/*!
    Helper for printing a vector using << to std::cout
*/
template <typename S>
std::ostream& operator<<(std::ostream& os,
                    const std::vector<S>& vector)
{
    for (auto element : vector) {
        os << element << " ";
    }
    return os;
}

void VERIFY_SORTED(std::vector<int> &v) {
    const bool isSorted = std::is_sorted(v.begin(), v.end());
    assert(isSorted);
}

std::vector<int> Algorithms::getUnsortedVector(int size = 100) {
    std::vector<int> unsorted;
    for (int i = 0; i < size; i++) {
        unsorted.push_back(i);
    }
    std::shuffle(unsorted.begin(), unsorted.end(), std::default_random_engine());
    return unsorted;
}

void Algorithms::run() {
    bubbleSort();
}

void Algorithms::bubbleSort() {
    std::vector<int> sorted = getUnsortedVector();
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int i = 1; i < int(sorted.size()); i++) {
            if (sorted[i - 1] > sorted[i]) {
                std::swap(sorted[i - 1], sorted[i]);
                swapped = true;
            }
        }
    }

    VERIFY_SORTED(sorted);
}