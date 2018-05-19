#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int sockMerchant(int n, int ar_size, int* ar) 
    {
    int count = 0;
    for(int i = 0;i < n; i++)
    {
    for(int j = i + 1; j < n; j++)
    {
        if(ar[i] == ar[j])
        {
            count++;
            ar[i] = -i;
            ar[j]=-j;
            
        }
    }
    }
        return count;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++)
    {
       scanf("%i",&ar[ar_i]);
    }
    int result = sockMerchant(n,n, ar);
    printf("%d\n", result);
    return 0;
}
