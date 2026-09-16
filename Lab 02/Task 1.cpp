#include <iostream>
using namespace std;

int main() {
    int sales[5];
    int* p = sales;

    // Read five non-negative sales values using pointer notation
    cout << "Enter sales for five days: ";

    for (int i = 0; i < 5; i++) {
        cin >> *(p + i);
    }

    // Display the values and calculate the total using pointer notation
    int total = 0;

    cout << endl << "Sales: ";

    for (int i = 0; i < 5; i++) {
        cout << *(p + i) << " ";
        total += *(p + i);
    }

    cout << endl;
    cout << "Total: " << total << endl;

    // Add 2 to the third day's value through the pointer
    *(p + 2) = *(p + 2) + 2;

    // Display the updated values and calculate the updated total
    total = 0;

    cout << "Updated sales: ";

    for (int i = 0; i < 5; i++) {
        cout << *(p + i) << " ";
        total += *(p + i);
    }

    cout << endl;
    cout << "Updated total: " << total << endl;

    return 0;
}