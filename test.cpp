#include "pch.h"
#include "gtest/gtest.h"
#include "MergeSort.h"

/**
 * @file MergeSortTest.cpp
 * @brief Zestaw test�w jednostkowych dla klasy MergeSort
 */

 /**
  * @brief Test sprawdzaj�cy sortowanie ju� posortowanego wektora
  */
TEST(MergeSortTest, AlreadySortedArray) {
    std::vector<int> array = { 1, 2, 3, 4, 5 };
    MergeSort sorter;
    sorter.sort(array);
    EXPECT_EQ(array, std::vector<int>({ 1, 2, 3, 4, 5 }));
}

/**
 * @brief Test sprawdzaj�cy sortowanie odwrotnie posortowanego wektora
 */
TEST(MergeSortTest, ReverseSortedArray) {
    std::vector<int> array = { 5, 4, 3, 2, 1 };
    MergeSort sorter;
    sorter.sort(array);
    EXPECT_EQ(array, std::vector<int>({ 1, 2, 3, 4, 5 }));
}

/**
 * @brief Test sprawdzaj�cy sortowanie wektora z losowymi warto�ciami
 */
TEST(MergeSortTest, RandomArray) {
    std::vector<int> array = { 38, 27, 43, 3, 9, 82, 10 };
    MergeSort sorter;
    sorter.sort(array);
    EXPECT_EQ(array, std::vector<int>({ 3, 9, 10, 27, 38, 43, 82 }));
}

/**
 * @brief Test sprawdzaj�cy sortowanie wektora z ujemnymi liczbami
 */
TEST(MergeSortTest, NegativeNumbersArray) {
    std::vector<int> array = { -3, -1, -2, -4, -5 };
    MergeSort sorter;
    sorter.sort(array);
    EXPECT_EQ(array, std::vector<int>({ -5, -4, -3, -2, -1 }));
}

/**
 * @brief Test sprawdzaj�cy sortowanie wektora z mieszanymi liczbami
 */
TEST(MergeSortTest, MixedNumbersArray) {
    std::vector<int> array = { -3, 1, -2, 4, 0 };
    MergeSort sorter;
    sorter.sort(array);
    EXPECT_EQ(array, std::vector<int>({ -3, -2, 0, 1, 4 }));
}

/**
 * @brief Test sprawdzaj�cy sortowanie pustego wektora
 */
TEST(MergeSortTest, EmptyArray) {
    std::vector<int> array = {};
    MergeSort sorter;
    sorter.sort(array);
    EXPECT_EQ(array, std::vector<int>({}));
}

/**
 * @brief Test sprawdzaj�cy sortowanie wektora z jednym elementem
 */
TEST(MergeSortTest, SingleElementArray) {
    std::vector<int> array = { 1 };
    MergeSort sorter;
    sorter.sort(array);
    EXPECT_EQ(array, std::vector<int>({ 1 }));
}

/**
 * @brief Test sprawdzaj�cy sortowanie wektora z powtarzaj�cymi si� warto�ciami
 */
TEST(MergeSortTest, DuplicatesArray) {
    std::vector<int> array = { 5, 1, 3, 3, 2, 1 };
    MergeSort sorter;
    sorter.sort(array);
    EXPECT_EQ(array, std::vector<int>({ 1, 1, 2, 3, 3, 5 }));
}

/**
 * @brief Test sprawdzaj�cy sortowanie wektora z ujemnymi powtarzaj�cymi si� warto�ciami
 */
TEST(MergeSortTest, NegativeDuplicatesArray) {
    std::vector<int> array = { -3, -1, -3, -2, -1 };
    MergeSort sorter;
    sorter.sort(array);
    EXPECT_EQ(array, std::vector<int>({ -3, -3, -2, -1, -1 }));
}

/**
 * @brief Test sprawdzaj�cy sortowanie wektora z mieszanymi powtarzaj�cymi si� warto�ciami
 */
TEST(MergeSortTest, MixedDuplicatesArray) {
    std::vector<int> array = { -3, 1, -2, 4, -2, 0 };
    MergeSort sorter;
    sorter.sort(array);
    EXPECT_EQ(array, std::vector<int>({ -3, -2, -2, 0, 1, 4 }));
}

/**
 * @brief Test sprawdzaj�cy sortowanie wektora z dwoma elementami
 */
TEST(MergeSortTest, TwoElementsArray) {
    std::vector<int> array = { 2, 1 };
    MergeSort sorter;
    sorter.sort(array);
    EXPECT_EQ(array, std::vector<int>({ 1, 2 }));
}

/**
 * @brief Test sprawdzaj�cy sortowanie du�ego wektora
 */
TEST(MergeSortTest, LargeArray) {
    std::vector<int> array(101);
    for (int i = 0; i < 101; ++i) array[i] = 100 - i;
    MergeSort sorter;
    sorter.sort(array);
    std::vector<int> expected(101);
    for (int i = 0; i < 101; ++i) expected[i] = i;
    EXPECT_EQ(array, expected);
}

/**
 * @brief Test sprawdzaj�cy sortowanie du�ego wektora z mieszanymi warto�ciami
 */
TEST(MergeSortTest, LargeMixedArray) {
    std::vector<int> array(101);
    for (int i = 0; i < 101; ++i) array[i] = (i % 2 == 0) ? i : -i;
    MergeSort sorter;
    sorter.sort(array);
    std::vector<int> expected(101);
    for (int i = 0; i < 101; ++i) expected[i] = (i < 51) ? -50 + i : i - 51;
    EXPECT_EQ(array, expected);
}
