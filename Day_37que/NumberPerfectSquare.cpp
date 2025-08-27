#include <iostream>
#include <cmath>  // sqrt ke liye
using namespace std;

int main() {
    int number;
    cin >> number;   // number input denge

    int root = sqrt(number);   // square root nikaleng
    if (root * root == number) {
        cout << "True";   // perfect square hai
    } else {
        cout << "False";  // nahi hai
    }
    return 0;
}
