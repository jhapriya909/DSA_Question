#include <iostream>
using namespace std;


int fibonacci(int n) {
    if (n <= 1)  
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Fibonacci sequence up to " << number << " is: ";
    for (int i = 0; i < number; i++) {
        cout << fibonacci(i);
        if (i != number - 1)
            cout << ", ";
    }

    cout << endl;
    return 0;
}
