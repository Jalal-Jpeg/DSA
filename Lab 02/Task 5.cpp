#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of existing marks: ";
    cin >> n;

    // Validating n before allocation
    if (n < 1 || n > 10) {
        cout << "Error; no allocation or mark input" << endl;
        return 0;
    }

    // Allocating the original array
    int* marks = new int[n];

    // Reading the original marks
    cout << "Enter " << n << " marks: ";

    for (int i = 0; i < n; i++) {
        cin >> *(marks + i);
    }

    // Allocating a second block with one extra position
    int* newMarks = new int[n + 1];

    // Copying the original values using pointer notation
    for (int i = 0; i < n; i++) {
        *(newMarks + i) = *(marks + i);
    }

    // Reading the new mark into the final position
    cout << endl << "Enter new mark: ";
    cin >> *(newMarks + n);

    // Releasing the old block
    delete[] marks;

    // Making the original pointer refer to the new block
    marks = newMarks;

    // Increasing the stored size
    n = n + 1;

    // Display all values
    cout << "Updated marks: ";

    for (int i = 0; i < n; i++) {
        cout << *(marks + i) << " ";
    }

    cout << endl;

    // Releasing the final block exactly once
    delete[] marks;
    marks = nullptr;

    return 0;
}