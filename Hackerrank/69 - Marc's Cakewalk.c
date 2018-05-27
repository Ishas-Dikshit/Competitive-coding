#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int c[n];
    int temp;
    long int miles=0;
    for(int i=0;i<n;i++)
        {scanf("%d",&c[i]);}
    for(int i=0;i<n;i++) 
        {
          for(int j=i;j<n;j++)
              {if(c[j]>c[i])
                {temp=c[j];
                 c[j]=c[i];
                 c[i]=temp;}
              }
    }
    for(int i=0;i<n;i++)
        {
          miles=miles+c[i]*pow(2,i);
    }
    printf("%ld",miles);
    // your code goes here
    return 0;
}