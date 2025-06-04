#include <iostream>
using namespace std;
int main()
{
    int n, r, sum, x;
    cout << "  Armstrong number are  :";

    for (int n = 1; n <= 500; n++) // 153
    {
        sum = 0;
        x = n;
        while (x > 0)
        {
            r = x % 10;            // 153%10 = 3
            sum = sum + r * r * r; // sum = 27
            x = x / 10;            // 15
        }
        if (sum == n)
        
            cout << n << " ";
        
    }
    return 0;
}