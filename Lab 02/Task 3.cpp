#include <iostream>
using namespace std;

int main() {
    int sales[2][3];
    int (*rowPtr)[3] = sales;

    // Reading the six values using pointer notation
    cout << "Enter sales for Branch 1: ";

    for (int c = 0; c < 3; c++) {
        cin >> *(*(rowPtr + 0) + c);
    }

    cout << "Enter sales for Branch 2: ";

    for (int c = 0; c < 3; c++) {
        cin >> *(*(rowPtr + 1) + c);
    }

    // Displaying the two-row table
    cout << endl << "Sales table:" << endl;

    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 3; c++) {
            cout << *(*(rowPtr + r) + c) << " ";
        }

        cout << endl;
    }

    // Calculateing branch totals using a separate loop
    cout << endl << "Branch totals:" << endl;

    for (int r = 0; r < 2; r++) {
        int total = 0;

        for (int c = 0; c < 3; c++) {
            total += *(*(rowPtr + r) + c);
        }

        cout << "Branch " << r + 1 << ": " << total << endl;
    }

    // Calculating day totals using a separate loop
    cout << endl << "Day totals:" << endl;

    for (int c = 0; c < 3; c++) {
        int total = 0;

        for (int r = 0; r < 2; r++) {
            total += *(*(rowPtr + r) + c);
        }

        cout << "Day " << c + 1 << ": " << total << endl;
    }

    return 0;
}