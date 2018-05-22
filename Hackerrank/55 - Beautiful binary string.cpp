#include <bits/stdc++.h>

using namespace std;

int beautifulBinaryString(string b) {
    // Complete this function
    int count = 0;
    int i = 0;
    while( i < b.size()){
        if(b[i] == '0' && b[i+1] == '1' && b[i+2] == '0'){
            count++;
            i = i+3;
        }else{
            i++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    string b;
    cin >> b;
    int result = beautifulBinaryString(b);
    cout << result << endl;
    return 0;
}