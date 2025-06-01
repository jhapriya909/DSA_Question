#include<iostream>
using namespace std;
int main(){
    
    int a,b,i;
    cout<<"Enter any two number:";
    cin>>a>>b;
    for(i = 1; i>0; i++){
        if(i%a == 0 && i%b==0)
        {
            cout<<"LCM" <<i ;
            break;
        }
    }
    return 0;
    
}

