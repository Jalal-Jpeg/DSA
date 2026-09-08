#include<iostream> // including the input/output stream library
using namespace std;

// main function
void main() {
	int arr[5] = { 2, 4, 6, 8, 10 }; // declaring an integer array named "arr" of size 5
	// with elements 2, 4, 6, 8 and 10

	cout << "Original Array: "; // printing label for original array output

	// for loop to display elements of the original array
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " "; // printing current element followed by space
	}

	arr[2] = 7; // changing the 3rd element (index 2) to 7
	cout << endl; // printing new line

	cout << endl << "Modified Array: "; // printing label for modified array output

	// for loop to iterate through the integer array "arr" after modification
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " "; // printing out elements of the integer array "arr" one by one separated by a space
	}
}