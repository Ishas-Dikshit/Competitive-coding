#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int aVeryBigSum(int n, int ar_size, long int* ar) {
    long int sum = 0;
    int ar_i;
    for( ar_i = 0; ar_i < n; ar_i++)
    {
        sum = sum + ar[ar_i];
    }
    return sum;
}

int main() {
    int n;
    int sum = 0;
    int ar_i;
    scanf("%i", &n);
    
    long int *ar = malloc(sizeof(long int) * n);
    for( ar_i = 0; ar_i < n; ar_i++){
       scanf("%li",&ar[ar_i]);
    }
    long int result = aVeryBigSum(n, n, ar);
    printf("%ld\n", result);
    return 0;
}
