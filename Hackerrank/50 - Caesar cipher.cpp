#include <bits/stdc++.h>

using namespace std;

string caesarCipher(string s, int k) {
    // Complete this function
    for(int i = 0 ; i< s.size(); i++){
        if(s[i] >= 'a' &&s[i] <= 'z'){
            if(s[i] + k <= 122 ){
                s[i] = s[i] + k;
            }else if(k>26){
                k = k%26;
                if(s[i] + k >122){
                    s[i] = s[i]+k-26;
                }else{
                    s[i] = s[i] + k;
                }
            }else{
                s[i] = s[i] + k -26;
            }
        }else if(s[i] >='A' && s[i] <= 'Z'){
            if(s[i] + k <= 90 ){
        
            s[i] = s[i] + k;
            }else if(k>26){
                k = k%26;
                if(s[i] + k >90){
                    s[i] = s[i]+k-26;
                }else{
                    s[i] = s[i] + k;
                }
            }else{
                s[i] = s[i] + k -26;
            }
        }
    }
    
    return s;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    string result = caesarCipher(s, k);
    cout << result << endl;
    return 0;
}