#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int b,w,bc,wc,z;
        cin>>b>>w;
        cin>>bc>>wc>>z;
        cout<<b*min(wc+z,bc) + w *min(bc+z,wc)<<endl;
    }
    return 0;
}