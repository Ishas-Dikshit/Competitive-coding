#include <bits/stdc++.h>

using namespace std;

int camelcase(string s) {
    // Complete this function
    int  count = 1;
    for(int i = 0; i< s.size();i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            count++;
        }
    }
    return count;
    
}

int main() {
    string s;
    cin >> s;
    int result = camelcase(s);
    cout << result << endl;
    return 0;
}