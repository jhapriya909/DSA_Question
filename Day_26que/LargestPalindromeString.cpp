#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;

    int maxLen = 0;
    vector<string> palindromes;

    for (int i = 0; i < s.size(); i++) {
        for (int j = i; j < s.size(); j++) {
            string sub = s.substr(i, j - i + 1);
            string rev = sub;
            reverse(rev.begin(), rev.end());

            if (sub == rev) {
                if (sub.size() > maxLen) {
                    maxLen = sub.size();
                    palindromes.clear();      // purane chhote wale hatao
                    palindromes.push_back(sub);
                } 
                else if (sub.size() == maxLen) {
                    palindromes.push_back(sub);
                }
            }
        }
    }

    cout << "Largest Palindromes: ";
    for (string p : palindromes) cout << p << " ";
}

