#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter any number:";
    cin >> n; // n = 153

    int temp = n; // temp = 153
    while (n != 0)
    {                                // 153! = 0true
        int rem = n % 10;            // rem = 3
        sum = sum + rem * rem * rem; // sum = 0+3*3*3 = 27
        n = n / 10;                  // 153/10 = 15
    }
    if (temp == sum)
        cout << " A armstrong Numbers" << sum;

    else
    {
        cout << "not a armstrong Numbers:" << sum;
        return 0;
    }
}