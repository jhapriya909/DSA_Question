#include <iostream>
using namespace std;
int main()
{

    int n, count = 0;
    cout << "Enter a values of a" << endl;
    cin >> n;
    int s = n;
    while (n > 0)
    {
        n = n / 10;
        count = count + 1;
    }
    cout << "Number of digits " << s << " = " << count << endl;
}