#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++)
    {
        int n;
        int m;
        int q;
        int count = 0;
        scanf("%d",&n);
        q = n;
        for(int i = 0; i < n; i++)
        {
            m = q % 10;
            
            if( m!=0 && n%m==0)
            {
                count++;
            }  
            q=q/10;
        }
        printf("%d\n",count);
    }
    return 0;
}
