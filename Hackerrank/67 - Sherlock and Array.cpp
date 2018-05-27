#include <bits/stdc++.h>

using namespace std;

string solve(vector < int > a){
    // Complete this function
    int s = 0;
    for(int i = 1 ; i < a.size(); i++){
        s = s+a[i];
    }
    int sum = 0;
    
    int flag = 0;
    string val;
    if(a.size() == 1){
        val = "YES";
    }else{
    for(int i = 1; i< a.size();i++){
        sum = sum +a[i-1];
        s = s - a[i];
        if(sum == s){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        val = "YES";
    }else{
        val = "NO";
    }
    
    }
    return val;
}

int main() {
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        string result = solve(a);
        cout << result << endl;
    }
    return 0;
}