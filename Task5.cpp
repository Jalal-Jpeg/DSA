#include <iostream> // including the input/output stream library
using namespace std;

// main function
int main() {
    int arr[8]; // declaring an integer array named "arr" of size 8

    cout << "Enter 8 integers:" << endl; // prompt the user to enter 8 integers

    // for loop to read 8 integers into the array
    for (int i = 0; i < 8; i++) {
        cout << "Element #" << i + 1 << ": "; // displaying prompt for current element number
        cin >> arr[i]; // reading an integer into the array at index i
    }

    int maxVal = arr[0]; // initializing variable "maxVal" with the first element of the array
    int minVal = arr[0]; // initializing variable "minVal" with the first element of the array
    int maxIndex = 0; // initializing variable "maxIndex" with 0 to store the index of maximum value
    int minIndex = 0; // initializing variable "minIndex" with 0 to store the index of minimum value

    cout << endl << "Results" << endl; // printing the "Results" heading

    // for loop to iterate through the array to find max, min, and repeating elements
    for (int i = 0; i < 8; i++) {
        // checking if current element is greater than the current maximum value
        if (arr[i] > maxVal) {
            maxVal = arr[i]; // updating "maxVal" with the new maximum value
            maxIndex = i;    // updating "maxIndex" with the index of the maximum value
        }

        // checking if current element is smaller than the current minimum value
        if (arr[i] < minVal) {
            minVal = arr[i]; // updating "minVal" with the new minimum value
            minIndex = i;    // updating "minIndex" with the index of the minimum value
        }

        int firstOccurIndex = i; // setting "firstOccurIndex" initially to current index i

        // nested for loop to check for duplicate/repeating elements prior to current index i
        for (int j = 0; j < i; j++) {
            // checking if an earlier element matches the current element
            if (arr[j] == arr[i]) {
                firstOccurIndex = j; // storing the index where the element first appeared
                break; // breaking out of inner loop after finding the first occurrence
            }
        }

        // checking if the element appeared earlier in the array
        if (firstOccurIndex < i) {
            // printing details of the repeating element and its first occurrence index
            cout << "Element at index " << i << " (" << arr[i] << ") is repeating and first occurred at index " << firstOccurIndex << endl;
        }
    }

    // displaying the largest value along with its index
    cout << endl << "Largest Value is " << maxVal << " at index " << maxIndex;

    // displaying the smallest value along with its index
    cout << endl << "Smallest Value is " << minVal << " at index " << minIndex;

    return 0; // returning 0 to indicate successful execution
}