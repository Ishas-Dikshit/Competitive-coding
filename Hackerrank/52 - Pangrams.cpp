#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {

    int a[26];
    int temp;
    int flag = 0;
    string val;
    for(int i = 0 ; i< 26; i++){
        a[i] = 0;
    }
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i]>='A' && s[i]<='Z'){
            temp = s[i] - 65;
            a[temp]++;
        }else{
            temp = s[i] - 97;
            a[temp]++;
        }
    }
    for(int i = 0; i < 26 ; i++){
        if(a[i] == 0){
            flag = 1;
            break;
        }
    }
    if(flag==1){
        val = "not pangram";
    }else{
        val = "pangram";
    }
    return val;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
