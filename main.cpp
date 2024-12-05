#include "pch.h" 
#include <iostream> 
#include "MergeSort.h" 

/**
 * @file main.cpp
 * @brief G��wny plik programu demonstruj�cy sortowanie przez scalanie
 */

 /**
  * @brief G��wna funkcja programu
  * @return Kod b��du (0 oznacza brak b��du)
  */
int main() {
    // Tworzenie wektora liczb do posortowania
    std::vector<int> array = { 38, 27, 43, 3, 9, 82, 10 };

    // Tworzenie obiektu klasy MergeSort
    MergeSort sorter;

    // Sortowanie wektora
    sorter.sort(array);

    // Wy�wietlanie posortowanego wektora
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Zwracanie kodu b��du
    return 0;
}