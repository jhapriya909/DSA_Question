#include<iostream>
using namespace std;
int main(){
    int N , sum = 0;
    cout<<"Enter the Number";
    cin>>N;
    for(int i = 1; i<N; i++){
        if(N%i == 0){
            sum = sum + i;

        }
        else{
            sum = sum;
        }
    }
    if(N == sum){
        cout<<"Number is perfect";
    }
    else{
        cout<<"Number is not perfect";
    }
    return 0;
}