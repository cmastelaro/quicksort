#include <iostream>
#include <vector>
#include "quicksort.h"

int main() {
    // Test with integers
    std::vector<int> intData = {10, 7, 8, 9, 1, 5, 12, 19, 14};
    std::cout << "Unsorted integer array: ";
    for (int num : intData) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    quickSort(intData, 0, intData.size() - 1);

    std::cout << "Sorted integer array: ";
    for (int num : intData) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Test with floating point numbers
    std::vector<double> doubleData = {10.5, 7.1, 8.3, 9.4, 1.2, 5.8, 12.9, 19.7, 14.6};
    std::cout << "Unsorted double array: ";
    for (double num : doubleData) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    quickSort(doubleData, 0, doubleData.size() - 1);

    std::cout << "Sorted double array: ";
    for (double num : doubleData) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Test with strings
    std::vector<std::string> stringData = {"apple", "orange", "banana", "grape", "cherry"};
    std::cout << "Unsorted string array: ";
    for (const std::string& str : stringData) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    quickSort(stringData, 0, stringData.size() - 1);

    std::cout << "Sorted string array: ";
    for (const std::string& str : stringData) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    return 0;
}