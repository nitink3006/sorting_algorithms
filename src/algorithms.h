#pragma once

#include <iostream>
#include <vector>

class Algorithms 
{
public:
    Algorithms() = default;

    /*!
        Run the implemented algortighms in the m_sortMe vector.
    */
    void run();

private:
    void bubbleSort();

    /*!
        Returns a unsorted vector.
    */
    std::vector<int> getUnsortedVector(int size);
};