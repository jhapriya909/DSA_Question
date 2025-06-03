#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str)
{
    int left = 0, right = str.length() - 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
{
    string input;
    cout << "Enter a number or string: ";
    cin >> input;

    if (isPalindrome(input))
    {
        cout << "It is a palindrome!" << endl;
    }
    else
    {
        cout << "It is not a palindrome." << endl;
    }

    return 0;
}