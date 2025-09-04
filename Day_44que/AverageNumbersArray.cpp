#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;          // array size input

    for (int i = 0, x; i < n; i++) {
        cin >> x;      // number input
        sum += x;      // sum me add
    }

    double average = (double)sum / n;  // proper average
    cout << average;
    return 0;
}

