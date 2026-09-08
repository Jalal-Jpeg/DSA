# DSA Lab 01: Introduction to Version Control (Git) and Simple Test Cases

**Name:** Muhammad Jalal Khan  
**CMS ID:** 552756  
**Class:** BSCS-15-E  
**Date:** September 8, 2026  

---

## Program Summaries

* **`task1.cpp`:** Demonstrates basic array operations by declaring an integer array, modifying its third element and printing all values using a `for` loop.
* **`task2.cpp`:** Reads 5 integers into an array and uses a separate loop to calculate and display the step-by-step running total and final sum.
* **`task3.cpp`:** Implements a `Student` class with attributes `rollNumber` and `marks`, demonstrating object instantiation, member functions and object-specific memory allocation.
* **`task4.cpp`:** Processes an array of 8 integers to determine the minimum and maximum values along with their indices, while reporting the first occurrence of repeating elements.
* **`task5.cpp`:** Implements search logic to locate the minimum and maximum array elements and trace duplicate occurrences back to their initial index.
* **`task6.cpp`:** Reverses an array of 6 integers in-place without allocating an additional array and displays the modified sequence.
* **`task7.cpp`:** Filters 10 integer inputs in-place to shift unique elements to the front, preserving original ordering and returning the total count of distinct values.

---

## Task 3 Test Results & Experiment Analysis (mentioned in Task 8)

### Test Results

| Stage / Action | Object | Roll Number | Marks |
| :--- | :--- | :--- | :--- |
| **Initial State** | `s1` | 1 | 75 |
| **Initial State** | `s2` | 2 | 90 |
| **After modifying `s1.marks = 80`** | `s1` | 1 | **80** |
| **After modifying `s1.marks = 80`** | `s2` | 2 | **90** |

### Explanation
Modifying `s1.marks` to `80` **does not** change `s2.marks`. Each object created from a class in C++ receives its own distinct memory allocation for its instance variables. Because `s1` and `s2` occupy completely separate memory addresses, updating data members in `s1` has no effect on `s2`.