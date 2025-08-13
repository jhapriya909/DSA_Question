#include <iostream>
using namespace std;

int main() {
    int limit,a = 0, b = 1;;
    cout << "Enter the limit for the Fibonacci series: ";
    cin >> limit;

    cout << "Fibonacci series up to " << limit << ": ";

    while (a <= limit) {
        cout << a << " ";
        int next = a + b; // Next number
        a = b;
        b = next;
    }

    cout << endl;
    return 0;
}