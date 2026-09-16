#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    // Validating n before allocation
    if (n < 1 || n > 10) {
        cout << "Error; no allocation or mark input" << endl;
        return 0;
    }

    // Allocating the dynamic array
    int* marks = new int[n];

    // Reading marks using pointer notation
    cout << "Enter marks: ";

    for (int i = 0; i < n; i++) {
        cin >> *(marks + i);
    }

    // Displaying marks, calculate total and count passing marks
    int total = 0;
    int passCount = 0;

    cout << "Marks: ";

    for (int i = 0; i < n; i++) {
        cout << *(marks + i) << " ";

        total += *(marks + i);

        if (*(marks + i) >= 50) {
            passCount++;
        }
    }

    // Using double so the fractional part of the average is preserved
    double average = total * 1.0 / n;

    cout << endl << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Pass count: " << passCount << endl;

    // Releasing the dynamic array
    delete[] marks;
    marks = nullptr;

    return 0;
}