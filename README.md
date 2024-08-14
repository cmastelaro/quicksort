# quicksort

## Project Overview

This project implements the Quick Sort algorithm in C++ using templates, allowing sorting of various data types. It includes a set of unit tests using Google Test to ensure the correctness of the implementation.

## Quick Sort Algorithm

Quick Sort is a highly efficient sorting algorithm that uses a divide-and-conquer approach. It works as follows:

1. **Choose a Pivot**: Select an element from the array to act as the pivot.
2. **Partition**: Rearrange the array so that all elements less than the pivot come before it, and all elements greater come after it.
3. **Recursively Sort**: Apply the same process to the sub-arrays of elements with smaller and larger values.

The algorithm has an average time complexity of O(n log n) and is known for its efficiency with large datasets.

### Time Complexity

- **Average Case**: O(n log n)
  - Occurs when the pivot divides the array into two roughly equal halves. This is the typical scenario for Quick Sort.

- **Best Case**: O(n log n)
  - The best case is similar to the average case where the pivot divides the array into two nearly equal-sized sub-arrays.

- **Worst Case**: O(n^2)
  - Occurs when the pivot is the smallest or largest element, resulting in highly unbalanced partitions (e.g., already sorted array). This can be mitigated by using strategies like random pivots or median-of-three to choose a better pivot.

### Space Complexity

- **Average Case**: O(log n)
  - The space complexity is primarily due to the recursive stack, which grows with the depth of recursion.

- **Worst Case**: O(n)
  - In the worst case, the recursion depth can reach n, leading to linear space usage.

## Project Structure

- `include/`: Contains the header files.
- `src/`: Contains the source files, including the implementation of Quick Sort and the main application.
- `tests/`: Contains unit tests for the Quick Sort implementation using Google Test.
- `CMakeLists.txt`: CMake build configuration file.

## Getting Started

### Prerequisites

- CMake (3.10 or higher)
- Google Test library (gtest)
- A C++ compiler (e.g., g++, clang++)

### Setting Up Google Test

1. **Download Google Test**: Clone the Google Test repository into the `lib/googletest` directory.
   
   ```sh
   mkdir -p lib
   cd lib
   git clone https://github.com/google/googletest.git
   ```

2. **Google Test Directory Structure**: Ensure that the `lib/googletest` directory contains the Google Test source code.

### Building the Project

1. **Navigate to the Project Directory**:

   ```sh
   cd quicksort
   ```

2. **Create and Navigate to the Build Directory**:

   ```sh
   mkdir build
   cd build
   ```

3. **Run CMake to Configure the Project**:

   ```sh
   cmake ..
   ```

4. **Build the Project**:

   ```sh
   make
   ```

5. **Run the Tests**:

   ```sh
   ./quicksort_test
   ```

   This will execute the unit tests for the Quick Sort implementation.

### Project Details

- **Quick Sort Implementation**: Located in `src/quicksort.h` and templated for various data types.
- **Unit Tests**: Defined in `tests/quicksort_test.cpp`, testing different data types and edge cases.

## Running the Application

The main executable `quicksort` is built alongside the tests. To run the application, use the following command after building:

```sh
./quicksort
```

This will run the Quick Sort algorithm on predefined datasets and display the results.

## Contributing

Feel free to contribute to this project by submitting pull requests or reporting issues. For any questions or suggestions, please contact the project maintainer.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

## Acknowledgements

- Google Test for the testing framework.
- CMake for build configuration.

```

### Notes

- **Google Test Setup**: The README assumes you will manually clone Google Test into the `lib/googletest` directory. Alternatively, you can use package managers like `vcpkg` or `conan` to manage dependencies.
- **Build Commands**: Adjust commands based on your environment or if you use different tools.
- **License**: Adjust the license section based on your project's actual licensing terms.

This README provides a clear guide for setting up, building, and testing the Quick Sort project using Google Test.