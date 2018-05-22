#include <bits/stdc++.h>

using namespace std;

// Complete the gameOfThrones function below.
string gameOfThrones(string s) {

    for(int i = 0 ; i < s.size(); i++){
        s[i] = s[i]-97;
    }
    sort(s.begin(),s.end());
    int temp = s[0];
    long long int c = 1;
    int r = 0;
    string val;
    vector<int> a;
    for(int i = 1 ; i < s.size(); i++){
        if(temp == s[i]){
            c++;
            if(i == s.size()-1 && c>1){
                a.push_back(c);
            }
        }else{
            a.push_back(c);
            temp = s[i];
            c = 1;
        }
    }
 
        for(int i = 0 ; i < a.size(); i++){
            if(a[i] %2 == 1 && r <1){
                r++;
                val = "YES";
            }else if(a[i]%2 == 1 && r==1){
                val = "NO";
                break;
            }else if(a[i] %2 == 0){
                val = "YES";
            }
        }
    
return val;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
