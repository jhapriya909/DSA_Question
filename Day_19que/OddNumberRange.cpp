#include<iostream>
using namespace std;
int main(){
    int i , num, sum=0;
    cout<<"Enter amy number:";
    cin>>num;
    for(int i = 1; i<=10; i++){
        if(i%2!=0){
            cout<<i<<endl;
            sum = sum + i;

        }
    }
    cout<<"sum of odd number ="<<sum <<endl;

}
