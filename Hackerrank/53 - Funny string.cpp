#include <bits/stdc++.h>

using namespace std;

string funnyString(string s){
    // Complete this function
    string r = s;
    int j = s.size();
    int flag = 0;
    reverse(s.begin(), s.end());
    for(int i = 0; i< s.size()-1; i++){
        if(abs(r[i+1] - r[i]) != abs(s[i+1] - s[i])){
            flag = 1;
        }
    }
    if(flag == 0){
        return "Funny";
    }else{
        return "Not Funny";
    }
    
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        string result = funnyString(s);
        cout << result << endl;
    }
    return 0;
}