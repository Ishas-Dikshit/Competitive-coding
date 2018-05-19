#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    double count1=0,count2=0,count3=0;
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int arr_i = 0; arr_i < n; arr_i++)
    {
        if(arr[arr_i] == 0)
        {
            count1++;
        }
        else if(arr[arr_i] > 0)
        {
            count2++;
        }
        else
        {count3++;}
    }
    count1 = count1/n;
    count2 = count2/n;
    count3 = count3/n;
    
    printf("%.6f\n",count2);
    printf("%.6f\n",count3);
    printf("%.6f\n",count1);
    return 0;
}
