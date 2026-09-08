#include <iostream> // including the input/output stream library
using namespace std;

// main function
int main() {
    int arr[10]; // declaring an integer array named "arr" of size 10
    int uniqueCount = 0; // initializing integer variable "uniqueCount" with 0 to keep track of unique elements

    cout << "Enter 10 integers: "; // prompt the user to enter 10 integers

    // for loop to read 10 integers into the array
    for (int i = 0; i < 10; i++) {
        cin >> arr[i]; // reading an integer into the array at index i
    }

    // for loop to iterate through each element in the array
    for (int i = 0; i < 10; i++) {
        bool alreadyExists = false; // initializing boolean flag to check if current element is a duplicate

        // nested for loop to check if current element appeared earlier in the array
        for (int j = 0; j < i; j++) {
            // checking if current element matches a previous element
            if (arr[i] == arr[j]) {
                alreadyExists = true; // marking element as already existing
                break; // breaking out of inner loop after finding duplicate
            }
        }

        // checking if current element is unique (not seen previously)
        if (!alreadyExists) {
            int value = arr[i]; // storing the unique value in a temporary variable "value"

            // shifting elements right to make room for placing the unique element at the front
            for (int j = i; j > uniqueCount; j--) {
                arr[j] = arr[j - 1]; // shifting element from previous index to current index
            }

            arr[uniqueCount] = value; // placing the unique element at index "uniqueCount"
            uniqueCount++; // incrementing the count of unique elements found
        }
    }

    cout << endl << "Unique values: "; // printing header for unique values

    // for loop to print all unique values shifted to the front of the array
    for (int i = 0; i < uniqueCount; i++) {
        cout << arr[i] << " "; // printing current unique element separated by space
    }

    // displaying total count of unique elements
    cout << endl << "Count: " << uniqueCount << endl;

    return 0; // returning 0 to indicate successful execution
}