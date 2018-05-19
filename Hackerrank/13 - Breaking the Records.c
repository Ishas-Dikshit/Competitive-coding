#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* getRecord(int s_size, int* s, int *result_size){
    int fallen = 0;
    int great = 0;   
    *result_size = 2;
    int *result =  malloc(sizeof(int) * *result_size);    
    int max = s[0];
        int min = s[0];
    for(int i=1;i<s_size;i++)
    {
                                 
            if(max < s[i])
            {
                max = s[i];
                great++;
               
            }    
         else if(min > s[i])
             {
                min = s[i];
                fallen++;             
             }
        
    }
      
    result[0] = great;
    result[1] = fallen;
   return result;    
}
int main() {
    int n; 
    scanf("%d",&n);
    int *s = malloc(sizeof(int) * n);
    for(int s_i = 0; s_i < n; s_i++){
       scanf("%d",&s[s_i]);
    }
    int result_size;
    int* result = getRecord(n, s, &result_size);
    for(int i = 0; i < result_size; i++) {
        if (i) {
            printf(" ");
        }
        printf("%d", result[i]);
    }
    puts("");
    return 0;
}
