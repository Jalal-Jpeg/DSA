#include<iostream> // including the input/output stream library
using namespace std;

// main function
void main() {
	int numbers[5]; // declaring an integer array called "numbers" of size 5
	int total = 0;  // initializing an integer variable called "total" with the value 0

	cout << "Enter 5 integers: "; // prompt the user to enter 5 integers

	// for loop to read five integers into the array
	for (int i = 0; i < 5; i++) {
		cin >> numbers[i]; // reading an integer into the array at index i
	}

	cout << endl << "Processing running total:" << endl; // printing header for total processing steps

	// for loop to calculate and display the total step-by-step
	for (int j = 0; j < 5; j++) {
		total += numbers[j]; // adding the element in the array at index j into the "total" variable

		// displaying current element being added and the updated running total
		cout << "Added " << numbers[j] << " so Current Total is " << total << endl;
	}

	cout << endl << "Final Total: " << total << endl; // displaying the final total of the array elements
}