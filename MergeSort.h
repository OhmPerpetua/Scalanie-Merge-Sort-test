#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>

/**
 * @file MergeSort.h
 * @brief Deklaracja klasy MergeSort
 */

 /**
  * @class MergeSort
  * @brief Klasa realizująca algorytm sortowania przez scalanie
  */
class MergeSort {
public:
    /**
     * @brief Sortuje wektor liczb
     * @param array Wektor liczb do posortowania
     */
    void sort(std::vector<int>& array);

private:
    /**
     * @brief Rekurencyjna funkcja realizująca sortowanie przez scalanie
     * @param array Wektor liczb do posortowania
     * @param left Lewa granica podwektora
     * @param right Prawa granica podwektora
     */
    void mergeSort(std::vector<int>& array, int left, int right);

    /**
     * @brief Funkcja scalająca dwa podwektory
     * @param array Wektor liczb do posortowania
     * @param left Lewa granica podwektora
     * @param middle Środkowy indeks podwektora
     * @param right Prawa granica podwektora
     */
    void merge(std::vector<int>& array, int left, int middle, int right);
};

#endif // MERGESORT_H