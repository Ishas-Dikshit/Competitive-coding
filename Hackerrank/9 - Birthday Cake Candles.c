#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int birthdayCakeCandles(int n, int ar_size, int* ar) {
    int ar_i,count=0;
    int max = ar[0];
    for(ar_i = 0; ar_i < n ; ar_i++)
    {
    if(ar[ar_i] > max)
    {
        max = ar[ar_i];
    }
    }
    for(ar_i = 0; ar_i < n; ar_i++)
    {
        if(ar[ar_i] == max)
        {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    int ar_i;
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = birthdayCakeCandles(n, n, ar);
    printf("%d\n", result);
    return 0;
}
