#include "pch.h"
#include "MergeSort.h"

/**
 * @file MergeSort.cpp
 * @brief Implementacja algorytmu sortowania przez scalanie
 */

 /**
  * @brief Sortuje wektor liczb
  * @param array Wektor liczb do posortowania
  */
void MergeSort::sort(std::vector<int>& array) {
    mergeSort(array, 0, array.size() - 1);
}

/**
 * @brief Rekurencyjna funkcja realizuj¹ca sortowanie przez scalanie
 * @param array Wektor liczb do posortowania
 * @param left Lewa granica podwektora
 * @param right Prawa granica podwektora
 */
void MergeSort::mergeSort(std::vector<int>& array, int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;
        mergeSort(array, left, middle);
        mergeSort(array, middle + 1, right);
        merge(array, left, middle, right);
    }
}

/**
 * @brief Funkcja scalaj¹ca dwa podwektory
 * @param array Wektor liczb do posortowania
 * @param left Lewa granica podwektora
 * @param middle Œrodkowy indeks podwektora
 * @param right Prawa granica podwektora
 */
void MergeSort::merge(std::vector<int>& array, int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;
    std::vector<int> L(n1);
    std::vector<int> R(n2);
    for (int i = 0; i < n1; i++) L[i] = array[left + i];
    for (int j = 0; j < n2; j++) R[j] = array[middle + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            array[k] = L[i];
            i++;
        }
        else {
            array[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        array[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        array[k] = R[j];
        j++;
        k++;
    }
}