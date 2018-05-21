#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int d;
    int count=0;
    int a[n];
    cin>>n>>d;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(int i = 0; i<n;i++)
    {
        for(int j = i+1; j<n;j++)
        {
            if(a[j]-a[i]==d)
            {
            for(int k = j+1; k < n; k++)
            {
                if(a[k]-a[j] == d)
                {
                    count++;
                }
            }
            }
        }
    }
    cout<<count;
    return 0;
}
