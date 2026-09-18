#include <iostream>
#include <cassert>

using namespace std;

// Function prototype
bool isSorted(const int* arr, const int size);

// Test Functions (Part 1 - TDD Test Cases)
void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true);
    cout << "[PASS] Test 1: Sorted Array" << endl;
}

void testUnsortedArray() {
    int arr[] = {1, 4, 3, 5, 6};
    assert(isSorted(arr, 5) == false);
    cout << "[PASS] Test 2: Unsorted Array" << endl;
}

void testDuplicateValues() {
    int arr[] = {1, 2, 2, 3, 5};
    assert(isSorted(arr, 5) == true);
    cout << "[PASS] Test 3: Duplicate Values" << endl;
}

void testSingleElement() {
    int arr[] = {67};
    assert(isSorted(arr, 1) == true);
    cout << "[PASS] Test 4: Single Element" << endl;
}

void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    assert(isSorted(arr, 5) == false);
    cout << "[PASS] Test 5: Descending Array" << endl;
}

void testNegativeValues() {
    int arr[] = {-10, -5, 0, 5, 10};
    assert(isSorted(arr, 5) == true);
    cout << "[PASS] Test 6: Negative Values" << endl;
}

void testAllEqualElements() {
    int arr[] = {7, 7, 7, 7, 7};
    assert(isSorted(arr, 5) == true);
    cout << "[PASS] Test 7: All Equal Elements" << endl;
}

void testEmptyArray() {
    int arr[] = {};
    assert(isSorted(arr, 0) == true);
    cout << "[PASS] Test 8: Empty Array" << endl;
}

// Function Implementation
bool isSorted(const int* arr, const int size) {
    if (size <= 1) return true;

    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) { 
            return false;
        }
    }
    return true;
}

int main() {
    cout << "--- Running TDD Unit Tests ---" << endl;
    
    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testAllEqualElements();
    testEmptyArray();

    cout << "\nAll test cases passed successfully!" << endl;
    return 0;
}