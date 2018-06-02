#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v;
	    int temp;
	    int g;
	    for(int i = 0; i < n; i++){
	        cin>>temp;
	        v.push_back(temp);
	    }
	    for(int i = 0 ; i< n; i++){
	        g = count(v.begin(),v.end(),v.at(i));
	        if(g%2 != 0){
	            cout<<v[i]<<endl;
	            break;
	        }
	    }
	  
	}
	return 0;
}