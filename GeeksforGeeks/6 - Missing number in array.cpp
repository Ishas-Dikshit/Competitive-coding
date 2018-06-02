#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,s;
	    cin>>n;
	    int a[n-1];
	    for(int i = 0 ; i< n-1; i++){
	        cin>>a[i];
	    }
	    s = (n*(n+1))/2;
	    for(int i = 0; i< n-1; i++){
	        s = s- a[i];
	    }
	    cout<<s<<endl;
	}
	return 0;
}