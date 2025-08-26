#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    int total = 0;

    for (int num = start; num <= end; num++) {
        if (num > 1) {  // prime hamesha 1 se bada hota hai
            bool isPrime = true;

            for (int i = 2; i < num; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) {
                total += num; // agar prime hai to sum me add karo
            }
        }
    }

    cout << "Sum of primes = " << total;
    return 0;
}
