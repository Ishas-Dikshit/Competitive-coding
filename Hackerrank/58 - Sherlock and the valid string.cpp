#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {
    int l = s.size();
    for(int i = 0 ; i < l; i++){
        s[i] = s[i]-97;
    }
    sort(s.begin(),s.end());
    vector<int> a;
    int temp = s[0];
    int c = 1;
    string val;
    int flag = 0;
    for(int i = 1 ; i < l;i++){
        if(s[i] == temp){
            c++;
            if(i == l-1 && c>=2){
                a.push_back(c);
            }
        }else{
            a.push_back(c);
            temp = s[i];
            c = 1;
            if(i==l-1 && s[l-1] != s[l-2]){
                a.push_back(1);
            }
        }    
    }
    int f = a.size();
    int t = a[0];
    int z = count(a.begin(),a.end(),t);
    int y = a[1];
    int x = count(a.begin(),a.end(),t);
    if(z == f || x == f){
        val = "YES";   
    }else if(z == f-1 || x == f-1){
        if(z == f-1){
            for(int i = 0 ; i < a.size(); i++){
                a[i] = a[i]-t;
            }
            for(int i = 0; i < a.size(); i++){
                if(a[i] == 1){
                    val = "YES";
                    break;
                }else if(a[i]>1){
                    val = "NO";
                }else if(a[i] == -1 && a[i] + t ==1){
                    val = "YES";
                    break;
                }else{
                    val = "YES";
                }
            }
        }else{
            for(int i = 0 ; i < a.size(); i++){
                a[i] = a[i]-t;
            }
            for(int i = 0; i < a.size(); i++){
                if(a[i] == 1){
                    val = "YES";
                    break;
                }else if(a[i]>1){
                    val = "NO";
                }else if(a[i] == -1 && a[i] + t ==1){
                    val = "YES";
                    break;
                }else{
                    val = "YES";
                }
        }
        }
    }else{
            val = "NO";
    }
    return val;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
