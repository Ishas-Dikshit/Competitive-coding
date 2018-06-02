#include <iostream>

using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int c;
	    cin>>c;
	    string s;
	    cin>>s;
	    int flag = 0;
	    int i = 0;
	    int j = c-1;
	    while(i<c/2 && j>c/2){
	        if(s[i] != s[j]){
	            flag = 1;
	            break;
	        }
	        i++;
	        j--;
	    }
	    if(flag == 0){
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}