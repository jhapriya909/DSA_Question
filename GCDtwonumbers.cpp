#include<iostream>
using namespace std;
int main(){
    int num , num1, i ,gcd;
    cout<<"Enter first Number";
    cin>>num >>num1;
    for(i = 1; i<=num && i<=num1; i++){
        if(num%i==0 && num1%i==0)
        {
            gcd = i;
        }
    }
    cout<<gcd <<"is GCD of" <<num << " " <<num1;
    
}



//  #include<iostream>
// using namespace std;
//     int gcd(int a, int b){
//         if(b==0) return a;
//         return gcd (b,a%b);
//     }
//     int main()
//     {
//         cout<<gcd (18,48) <<endl;
//     }
 
