#include <iostream>
using namespace std;

int main() {
    long long number;  // bada number bhi handle hoga
    int digit, count = 0;

    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter digit to count: ";
    cin >> digit;

    while (number > 0) {
        int last = number % 10;  // last digit nikalo
        if (last == digit) {
            count++;  // agar match kare to count++
        }
        number /= 10;  // last digit hatao
    }

    cout << "Digit " << digit << " occurs " << count << " times." << endl;
    return 0;
}
