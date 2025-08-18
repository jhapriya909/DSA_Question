#include <iostream>
using namespace std;

int main()
{
    int base, exponent;
    cin >> base >> exponent; // User se input lete hain

    int result = 1; // Answer store karne ke liye

    // Exponent ke barabar multiplication karte hain
    for (int i = 1; i <= exponent; i++)
    {
        result = result * base;
    }

    cout << result << endl; // Result print karo
    return 0;
}


// SECOND METHOD
// #include <iostream>
// #include <cmath>   // pow() function ke liye
// using namespace std;

// int main() {
//     int base, exponent;
//     cin >> base >> exponent;

//     cout << pow(base, exponent) << endl;
//     return 0;
// }

//Result=(base)exponent