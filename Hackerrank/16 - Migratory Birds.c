#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int migratoryBirds(int n, int ar_size, int* ar) {
   int a[5],value;
    for(int i = 0; i < 5; i++)
    {
        a[i]=0;
    }
    for(int i = 0; i < n; i++)
    {
        if(ar[i] == 1)
        {
            a[0]++;
        }
         if(ar[i] == 2)
        {
            a[1]++;
        }
         if(ar[i] == 3)
        {
            a[2]++;
        }
         if(ar[i] == 4)
        {
            a[3]++;
        }
         if(ar[i] == 5)
        {
            a[4]++;
        }
    }
    int max = a[0];
    for(int i = 1; i < 5; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
            value = i+1;
        }
    }
    return value;
     
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = migratoryBirds(n,n, ar);
    printf("%d\n", result);
    return 0;
}
