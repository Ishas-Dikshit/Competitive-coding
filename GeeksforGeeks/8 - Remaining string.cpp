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
	    char a;
	    cin>>a;
	    int count;
	    cin>>count;
	    int k;
	    if(count == 0){
	       cout<<s<<endl;
	    }else{
	        for(int i = 0 ; i<s.size(); i++){
	           if(s[i] == a){
	                count--;
	                if(count == 0){
	                    k = i+1;
	                    break;
	                }
	            }
	    }
	    if(count == 0 && k != s.size()){
	        for(int i = k; i<s.size();i++){
	            cout<<s[i];
	        }
	        cout<<endl;
	    }else{
	            cout<<"Empty string"<<endl;
	        }
	        
	    }
	}
	
	return 0;
}