#include <bits/stdc++.h>

using namespace std;

int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    
    int a=0,b=0,c=0,d=0;
    int count = 0;
    for(int i = 0; i< password.size(); i++){
        if(password[i] >= '0' && password[i] <= '9'){
            a++;
        }
        if(password[i] >= 'A' && password[i] <= 'Z'){
            b++;
        }
        if(password[i] >= 'a' && password[i] <= 'z'){
            c++;
        }
        if(password[i] == '!' || password[i] =='@' || password[i] =='#' || password[i] =='$' || password[i] =='%' || password[i]                 =='^' || password[i] =='&' || password[i] =='*' || password[i] =='(' || password[i] ==')' || password[i] =='-' ||                      password[i] == '+'){
            d++;
        }
    }
    if(a == 0){
        count++;
    }
    if( b== 0){
        count++;
    }
    if(c == 0){
        count++;
    }
    if(d == 0){
        count++;
    }
    if(password.size() < 6 && count + password.size() < 6){
        int l = 6 - (count+password.size());
        count = count + l;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    string password;
    cin >> password;
    int answer = minimumNumber(n, password);
    cout << answer << endl;
    return 0;
}