#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.length() != s2.length())
    {
        cout << "False";
    }

    int count[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        char ch = s1[i];
        count[ch - 'a']++;
    }

    for (int i = 0; i < s2.length(); i++)
    {
        char ch = s2[i];
        count[ch - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            cout << "False";
            return 0;
        }
    }

    cout << "True";
    return 0;
}
