#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n;
	    cin>>x;
	    int temp;
	    vector<int> v;
	    for(int i = 0 ; i<n; i++){
	        cin>>temp;
	        v.push_back(temp);
	    }
	    int c1,c2;
	    int flag1 = 0;
	    for(int i = 0 ; i<n;i++){
	        if(x == v[i]){
	            c1 = i;
	            flag1 = 1;
	            break;
	        }
	    }
	    for(int i = n-1;i>=0;i--){
	        if(x == v[i]){
	            c2 = i;
	            break;
	        }
	    }
	    if(flag1 !=0 ){
	        cout<<c1<<" "<<c2<<endl;
	    }else{
	        cout<<-1<<endl;
	    }
	}
	return 0;
}