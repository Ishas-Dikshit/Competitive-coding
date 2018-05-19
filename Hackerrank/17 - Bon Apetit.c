#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n; 
    int k; 
    scanf("%i %i", &n, &k);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int b; 
    scanf("%i", &b);
  
    
    
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + ar[i];
    }
    sum = sum - ar[k];
    sum = sum/2;
    if(sum != b)
    {
        sum = b - sum;
        printf("%d",sum);
    }
    else{
        printf("Bon Appetit");
    }
    
    return 0;
}
