#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        int height = 1;
        if(n == 1)
        {
            height = height + 1;
        }
        else
        {
            if(n%2 == 0)
            {
                for(int i = 0; i < n ; i = i+2)
                {
                     height = height*2 + 1;  
                }             
            }
            else
            {
                n = n - 1;
                for(int i = 0; i < n ; i = i + 2)
                {
                    height = height*2 + 1;  
                }
                height = height*2;        
            }
        }
    
        printf("%d\n",height);
        
    }
    return 0;
}
