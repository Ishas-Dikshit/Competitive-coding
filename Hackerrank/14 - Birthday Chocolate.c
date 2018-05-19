#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int solve(int n, int s_size, int* s, int d, int m){
    int sum[n],count=0,i,j;
    for(i=0;i<n;i++)
    {
        sum[i]=0;
    }
    for( i = 0; i <= n-m ;i++)
    {
        for( j = i; j < m + i; j++)
        {
            sum[i] = sum[i] + s[j];

        }

    }
    for(i=0;i<=n-m;i++)
    {
            if(sum[i]==d)
            {
                count++;
            }

    }
    return count;
}

int main() {
    int n,s_i;
    scanf("%d", &n);
    int *s = malloc(sizeof(int) * n);
    for(s_i = 0; s_i < n; s_i++){
       scanf("%d",&s[s_i]);
    }
    int d;
    int m;
    scanf("%d %d", &d, &m);
    int result = solve(n, n, s, d, m);
    printf("%d\n", result);
    return 0;
}
