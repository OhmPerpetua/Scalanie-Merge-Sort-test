#include "pch.h"
#include <iostream>
#include "MergeSort.h"


int main() {
    std::vector<int> array = { 38, 27, 43, 3, 9, 82, 10 };
    MergeSort sorter;
    sorter.sort(array);
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}