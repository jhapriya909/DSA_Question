#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of element:";
    cin>>n;
    int a[n];

    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum = sum + a[i];
    }
    cout<<sum;
    return 0;

}




