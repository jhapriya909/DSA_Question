#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter matrix size: ";
    cin >> size;

    int counter = 1;  // numbers fill karne ke liye

    for (int i = 0; i < size; i++) {         // rows
        for (int j = 0; j < size; j++) {     // columns
            cout << counter << " ";
            counter++;  // agla number
        }
        cout << endl;  // next row
    }

    return 0;
}
