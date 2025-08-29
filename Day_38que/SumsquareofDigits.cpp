#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number; 

    int sum = 0; 

    while (number > 0)
    {
        int digit = number % 10;     
        sum = sum + (digit * digit); 
        number = number / 10;        
    }

    cout << sum << endl; // result print hoga
    return 0;
}
