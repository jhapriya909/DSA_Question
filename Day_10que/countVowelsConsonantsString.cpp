#include<iostream>
using namespace std;

int main(){
    string str;
   cin>>str;

    int consonants = 0, vowel = 0; // Initialize counters
    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' ||
           str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' ||
           str[i] == 'u' || str[i] == 'U' ){
            vowel++;
            continue;
        }
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
            consonants++;
        }
    }
    cout << "Vowels: " << vowel << ", Consonants: " << consonants;
}
