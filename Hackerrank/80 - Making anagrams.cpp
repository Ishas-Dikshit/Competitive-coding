#include <bits/stdc++.h>

using namespace std;

// Complete the makingAnagrams function below.
int makingAnagrams(string s1, string s2) {
    int c[26] = {0};
    int c1[26] = {0};
    for(int i = 0 ; i< s1.length(); i++){
        c[s1[i] - 'a']++;  
    }
    for(int i = 0 ; i< s2.length(); i++){
        c1[s2[i] - 'a']++;  
    }
    int n = 0;
    for(int i = 0; i<26; i++){
        if(c[i] != c1[i]){
            n = n+ abs(c[i] - c1[i]);
        }
    }
    return n;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
