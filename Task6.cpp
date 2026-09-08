#include<iostream> // including the input/output stream library
using namespace std;

// main function
int main() {
	int arr[6]; // declaring an integer array named "arr" of size 6

	cout << "Enter 6 integers: "; // prompt the user to enter 6 integers

	// for loop to read 6 integers into the array "arr"
	for (int i = 0; i < 6; i++) {
		cin >> arr[i]; // reading an integer into the array at index i
	}

	cout << "Original Array: {"; // printing opening bracket for original array

	// for loop to iterate through and print elements of original array
	for (int i = 0; i < 6; i++) {
		cout << arr[i]; // printing current element
		if (i < 5) {
			cout << ", "; // printing comma and space after elements except the last one
		}
	}
	cout << "}" << endl; // printing closing bracket and moving to new line

	// loop only up to half the size (3) to swap elements without reversing back
	for (int j = 0; j < 3; j++) {
		int temp = arr[j];   // storing the element at index j in temporary variable "temp"
		arr[j] = arr[5 - j]; // assigning the element from opposite position to index j
		arr[5 - j] = temp;   // putting value from "temp" into the opposite position
	}

	cout << "Reversed Array: {"; // printing header for reversed array

	// for loop to iterate through and print elements of reversed array
	for (int j = 0; j < 6; j++) {
		cout << arr[j]; // printing current element of reversed array
		if (j < 5) {
			cout << ", "; // printing comma and space after elements except the last one
		}
	}
	cout << "}" << endl; // printing closing bracket and moving to new line

	return 0; // returning 0 to indicate successful execution
}