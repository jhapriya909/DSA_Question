#include <iostream>
using namespace std;

int main()
{
    int i, min, max, size = 5;
    int arr[5] = {4, 7, 1, 8, 5};
    min = arr[0];
    max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Smallest Number" << " =" << min << endl;
    cout << "Largest Number" << "  = " << max << endl;
}