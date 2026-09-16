#include <iostream>
using namespace std;

int main() {
    int rows;
    int cols = 0;

    cout << "Enter number of students: ";
    cin >> rows;

    cout << "Enter number of subjects: ";
    cin >> cols;

    // Validating dimensions before allocation
    if (rows < 1 || rows > 10 || cols < 1 || cols > 10) {
        cout << "Error; no allocation or mark input" << endl;
        return 0;
    }

    // Allocating the array of row pointers
    int** marks = new int* [rows];

    // Allocating each row separately
    for (int r = 0; r < rows; r++) {
        *(marks + r) = new int[cols];
    }

    // Reading marks using pointer notation
    cout << "Enter marks:" << endl;

    for (int r = 0; r < rows; r++) {
        cout << "Student " << r + 1 << ": ";

        for (int c = 0; c < cols; c++) {
            cin >> *(*(marks + r) + c);
        }
    }

    // Displaying the matrix
    cout << endl << "Marks matrix:" << endl;

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cout << *(*(marks + r) + c) << " ";
        }

        cout << endl;
    }

    // Calculating the first student's total before comparison
    int bestTotal = 0;

    for (int c = 0; c < cols; c++) {
        bestTotal += *(*(marks + 0) + c);
    }

    int bestStudent = 1;

    // Calculating the remaining students' totals and find the highest
    for (int r = 1; r < rows; r++) {
        int studentTotal = 0;

        for (int c = 0; c < cols; c++) {
            studentTotal += *(*(marks + r) + c);
        }

        if (studentTotal > bestTotal) {
            bestTotal = studentTotal;
            bestStudent = r + 1;
        }
    }

    // Displaying each student's total
    cout << endl << "Student totals:" << endl;

    for (int r = 0; r < rows; r++) {
        int studentTotal = 0;

        for (int c = 0; c < cols; c++) {
            studentTotal += *(*(marks + r) + c);
        }

        cout << "Student " << r + 1 << ": " << studentTotal << endl;
    }

    cout << endl << "Top student: " << bestStudent << endl;
    cout << "Top total: " << bestTotal << endl;

    // Deleting every separately allocated row
    for (int r = 0; r < rows; r++) {
        delete[] * (marks + r);
    }

    // Deleting the array of row pointers
    delete[] marks;

    // Resetting the pointer
    marks = nullptr;

    return 0;
}