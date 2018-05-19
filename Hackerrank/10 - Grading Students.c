#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() 
{
    int n, a[60],k[60],i,z[60];
    scanf("%d", &n);
    for( i = 0; i < n; i++)
    {
        scanf("%d\n",&a[i]);
    }
    for( i = 0; i < n; i++)
    {
        if(a[i] >= 38 && a[i] <= 100)
        {
           k[i]=0;
           while(k[i]<a[i]){
                k[i] = k[i] + 5;
             }

         z[i] = k[i] - a[i];
         if(z[i] < 3)
         {

             
             a[i]=a[i]+ z[i];
         }
     }
        printf("%d\n", a[i]);
    }

    return 0;
}
