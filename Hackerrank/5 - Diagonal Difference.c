#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i;
    int sum=0, b=0,result;
    scanf("%d",&n);
    int a[n][n];
    int a_i;
    int a_j;
    for(a_i = 0; a_i < n; a_i++){
       for(a_j = 0; a_j < n; a_j++){

          scanf("%d",&a[a_i][a_j]);
       }

    }
     for (i = 0; i < n; ++i)
        {
            sum = sum + a[i][i];
            b = b + a[i][n - i - 1];
        }
        result = abs(sum-b);
        printf("%d",result);
    return 0;
}