#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int m = 2;
    int n = 2;
    int k;
    scanf("%d",&k);
    for(int i =0; i < k-1; i++)
    {
        m = floor((m*3)/2);
        n = n + m ;
    }
    
    printf("%d",n);
    return 0;
}
