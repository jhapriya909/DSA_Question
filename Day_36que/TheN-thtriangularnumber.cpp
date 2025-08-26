#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // input lo

    int triangular = (N * (N + 1)) / 2; // formula apply karo
    cout << triangular << endl;

    return 0;
}