#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k; 
    scanf("%d %d",&n,&k);
    int *c = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    int E =100;
    int i = 0;
    i = (i+k) % n;
    while(i != 0)
    {
        if(c[i] == 1)
        {
            E = E - 3;
        }
        else if(c[i] == 0){
            E = E - 1;
        }
        i = (i + k)%n;
    }
    if(c[0] == 0)
    {
        E = E-1;
    }
    else if(c[0]==1)
    {
        E=E-3;
    }
    printf("%d",E);
    return 0;
}
