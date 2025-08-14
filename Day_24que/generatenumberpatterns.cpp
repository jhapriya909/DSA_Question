#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // number of rows

    int num = 1; // starting number

    for (int i = 1; i <= n; i++) {        // row loop
        for (int j = 1; j <= i; j++) {    // column loop
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}
