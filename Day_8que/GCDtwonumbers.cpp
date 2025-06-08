#include<iostream>
using namespace std;
int main(){
    int num, num1, i,gcd;
    cout<<"Enter the first number:";
    cin>>num;
    cout<<"Enet the second number:";
    cin>>num1;


    for(int i = 1; i<= num && i<num1;i++){
        if(num%i == 0 && num1%i == 0){
            gcd = i;
            cout<< gcd <<endl;
        }
        cout<<gcd <<"Is GCD of"  <<num<<num1;
}
}
 
