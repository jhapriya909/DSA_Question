#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout <<"Enter number of rows: ";
    cin >> n;

    for(int i = 1, k = 0; i <= n; ++i, k = 0) {
        for(m = 1; m <= n-i; ++m) {
            cout <<"  ";
        }

        while(k != 2*i-1) {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }    
}