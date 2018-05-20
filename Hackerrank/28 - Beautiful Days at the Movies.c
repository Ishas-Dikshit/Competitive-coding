#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    
    int i,j,k;
    scanf("%d",&i);
    scanf("%d",&j);
    scanf("%d",&k);
    int count = 0;
    int temp;
        
        for(i; i <= j; i++)    
        {       
            int rev = 0;
            temp = i;
                 while(temp > 0)
                 {
                    rev = rev * 10 + temp % 10;
                    temp = temp/10;              
                 }
                 if(abs(i - rev) % k == 0)
                 {
                   count++;
                 }
                     
        }
    
 printf("%d",count);       
    return 0;
}
