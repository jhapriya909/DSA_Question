#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n; // last number in sequence (1..n)

    vector<int> arr(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i]; // sequence input
    }

    vector<bool> present(n + 1, false);

    // mark numbers present
    for (int x : arr)
    {
        present[x] = true;
    }

    cout << "[";
    bool first = true;
    for (int i = 1; i <= n; i++)
    {
        if (!present[i])
        {
            if (!first)
                cout << ", ";
            cout << i;
            first = false;
        }
    }
    cout << "]";
    return 0;
}
