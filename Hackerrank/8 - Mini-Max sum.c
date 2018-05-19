#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int min = arr[0];
    long int sum1 = 0,sum2 = 0;
    
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
        
    }
    int a;
    for(int arr_i=0; arr_i<5;arr_i++)
    {
    for(int j=arr_i+1 ; j<5; j++)
    {
        if(arr[arr_i] > arr[j])
        {
            a = arr[arr_i];
            arr[arr_i] = arr[j];
            arr[j] = a;
        }
    }
    }
    for(int arr_i=0;arr_i<5-1;arr_i++)
    {
        sum1 = sum1 + arr[arr_i];
    }
    for(int arr_i=1;arr_i<5;arr_i++)
    {
        sum2 =sum2 + arr[arr_i];
    }
        printf("%lu",sum1);
        printf("%s"," ");
    printf("%lu",sum2);
    
    return 0;
}
