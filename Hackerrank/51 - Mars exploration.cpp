#include <bits/stdc++.h>

using namespace std;

int marsExploration(string s) {
    // Complete this function
    int count = 0;
    int i = 0;
    while(i<s.size()){
        if(s[i] != 'S')      
            count++;
        if(s[i+1] != 'O') 
            count++;
        if(s[i+2] != 'S')
            count++;
        i = i+3;
        
    }
 
    return count;
}

int main() {
    string s;
    cin >> s;
    int result = marsExploration(s);
    cout << result << endl;
    return 0;
}
