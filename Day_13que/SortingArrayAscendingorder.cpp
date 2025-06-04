#include <iostream>
using namespace std;
int main()
{

    int n, temp;
    int a[6];
    cout << "Enter the size of the array:" << endl;
    cin >> n;

    cout << "Enet the element of the array";

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "After the sorting the array:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}
