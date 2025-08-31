#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    while (n >= 10) {  // Jab tak single digit na ho
        int sum = 0;
        while (n > 0) {
            sum += n % 10;  // last digit add
            n /= 10;        // digit hatao
        }
        n = sum;  // sum ko n me daal do
    }

    cout << "Single digit sum is: " << n << endl;
    return 0;
}
