#include<iostream>
using namespace std;
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime numbers less than " << n << ":\n";

    for (int i = 2; i < n; i++) {     // 2 se n-1 tak
        bool prime = true;           // assume prime hai

        for (int j = 2; j < i; j++) { // check divisor
            if (i % j == 0) {
                prime = false;
                break;
            }
        }

        if (prime) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
