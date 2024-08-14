#include <gtest/gtest.h>
#include "quicksort.h"

// Helper function to check if the vector is sorted
template<typename T>
bool isSorted(const std::vector<T>& arr) {
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i - 1] > arr[i]) {
            return false;
        }
    }
    return true;
}

// Test for integer sorting
TEST(QuickSortTest, IntegerSort) {
    std::vector<int> data = {10, 7, 8, 9, 1, 5, 12, 19, 14};
    quickSort(data, 0, data.size() - 1);
    EXPECT_TRUE(isSorted(data));
}

// Test for double sorting
TEST(QuickSortTest, DoubleSort) {
    std::vector<double> data = {10.5, 7.1, 8.3, 9.4, 1.2, 5.8, 12.9, 19.7, 14.6};
    quickSort(data, 0, data.size() - 1);
    EXPECT_TRUE(isSorted(data));
}

// Test for string sorting
TEST(QuickSortTest, StringSort) {
    std::vector<std::string> data = {"apple", "orange", "banana", "grape", "cherry"};
    quickSort(data, 0, data.size() - 1);
    EXPECT_TRUE(isSorted(data));
}

// Test for empty vector
TEST(QuickSortTest, EmptyVector) {
    std::vector<int> data = {};
    quickSort(data, 0, data.size() - 1);
    EXPECT_TRUE(isSorted(data));
}

// Test for single element vector
TEST(QuickSortTest, SingleElementVector) {
    std::vector<int> data = {1};
    quickSort(data, 0, data.size() - 1);
    EXPECT_TRUE(isSorted(data));
}

// Test for already sorted vector
TEST(QuickSortTest, AlreadySortedVector) {
    std::vector<int> data = {1, 2, 3, 4, 5};
    quickSort(data, 0, data.size() - 1);
    EXPECT_TRUE(isSorted(data));
}