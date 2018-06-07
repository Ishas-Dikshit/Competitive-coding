#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    int i,j,array[100] = {0};
 
    
    for(i=0;i<n;i++) {
        int num;
        cin>>num;
        array[num]++;
    }
    
    for(i=0; i< 100; i++) {
        for(j=0; j<array[i]; j++) {
            cout<<i<<" ";
        }
    }
}