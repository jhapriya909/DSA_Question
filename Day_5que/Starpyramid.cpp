#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1, r = 0; i <= n; ++i, r = 0)
    {
        for (m = 1; m <= n - i; ++m)
        {
            cout << "  ";
        }

        while (r != 2 * i - 1)
        {
            cout << "* ";
            ++r;
        }
        cout << endl;
    }
}