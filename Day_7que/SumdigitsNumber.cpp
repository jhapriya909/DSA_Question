#include<iostream>
using namespace std;
int main(){
    int n,r, sum = 0;
    cout<<"Enter a number:";
    cin>>n;
    while(n>0){
        r = n%10;  // 3 7 
        sum = sum +r; // sum = 3+7
        n = n/10;   // 2
    }
    cout<<"Sum is :"<<sum;
    return 0;
}