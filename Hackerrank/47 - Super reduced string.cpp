#include <bits/stdc++.h>

using namespace std;

string super_reduced_string(string s){
    // Complete this function
    for(int i = 1; i< s.size(); i++){
        if(s[i-1] == s[i]){
            s.erase(i-1, 2);
            i=i-2;
        }   
        
    }
    if(s.size() == 0){
        return "Empty String";
    }else{
        return s;
    }  
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s);
    cout << result << endl;
    return 0;
}