#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;

    int sum = 0;
    while (fact > 0) {
        sum += fact % 10;
        fact /= 10;
    }

    cout << sum;
}
