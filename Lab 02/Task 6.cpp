#include <iostream>
using namespace std;

int main() {
    int n = 3;

    int* values = new int[n];

    // Reading three integers
    cout << "Enter three integers: ";

    for (int i = 0; i < n; i++) {
        cin >> *(values + i);
    }

    // Displaying the three integers
    cout << endl << "Values: ";

    for (int i = 0; i < n; i++) {
        cout << *(values + i) << " ";
    }

    cout << endl;

    // Releasing the dynamic array correctly
    delete[] values;

    // Resetting the pointer
    values = nullptr;

    return 0;
}