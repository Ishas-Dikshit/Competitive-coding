#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n;
	    cin>>k;
	    int a[n];
	    for(int i = 0; i < n; i++){
	        cin>>a[i];
	    }
	    int flag = 0;
	    int val;
	    for(int i = 0; i < n; i++){
	        if(a[i] == k){
	            val = i;
	            flag = 1;
	            break;
	        }
	    }
	    if(flag == 0){
	        cout<<-1<<endl;
	    }else{
	        cout<<val+1<<endl;
	    }
	}
	return 0;
}