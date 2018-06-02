#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[0] >='a' && s[0] <='z'){
            for(int i = 1; i< s.size(); i++){
                if(s[i] >= 'A' && s[i] <= 'Z'){
                    s[i] = s[i] + 32;
                }
            }
        }else{
            for(int i = 1; i< s.size(); i++){
                if(s[i] >= 'a' && s[i] <= 'z'){
                    s[i] = s[i] -32;
                }
            }
        }
        cout<<s<<endl;
        
    }
	return 0;
}