#include "pch.h" 
#include <iostream> 
#include "MergeSort.h" 

/**
 * @file main.cpp
 * @brief G³ówny plik programu demonstruj¹cy sortowanie przez scalanie
 */

 /**
  * @brief G³ówna funkcja programu
  * @return Kod b³êdu (0 oznacza brak b³êdu)
  */
int main() {
    // Tworzenie wektora liczb do posortowania
    std::vector<int> array = { 38, 27, 43, 3, 9, 82, 10 };

    // Tworzenie obiektu klasy MergeSort
    MergeSort sorter;

    // Sortowanie wektora
    sorter.sort(array);

    // Wyœwietlanie posortowanego wektora
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Zwracanie kodu b³êdu
    return 0;
}