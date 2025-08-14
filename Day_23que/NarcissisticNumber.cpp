#include<iostream>
using namespace std;
int main()
{
    int n, r ,sum = 0, x;
    cout<<"Enter a number to check it is Narcisitic  number or not:";
    cin>>n;
    x = n;
    while(n>0){
        r = n % 10;
        sum = sum + r * r* r;
        n = n/10;
    }
    if (sum ==x){
        cout<<x <<" is Narcisitic Number";
    }
    else {
        cout<< x << "is  not Narcisitic Number:";
    }
    return 0;
}
