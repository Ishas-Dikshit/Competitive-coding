#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	for(int i = 0 ; i<t;i++){
	    string s;
	    cin>>s;
	    string d;
	    cin>>d;
	    int k = 0;
	    
	    while(k < s.size()){
	        for(int j = 0 ; j < d.size(); j++){
	            if(d[j] == s[k]){
	                
	                s.erase(k,1);
	                k--;
	            }
	        }
	        k++;
	    }
	    cout<<s;
	    cout<<endl;
	}
	return 0;
}