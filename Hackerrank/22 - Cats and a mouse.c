#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int q; 
    scanf("%d",&q);
    for(int a0 = 0; a0 < q; a0++){
        int x; 
        int y; 
        int z; 
        scanf("%d %d %d",&x,&y,&z);
        int d1 = abs(z-x);
        int d2 = abs(z-y);
        if(d1>d2)
        {
            printf("%s\n","Cat B");
        }
        else if (d1<d2)
        {
            printf("%s\n","Cat A");
        }
        else
        {
            printf("%s\n","Mouse C");
        }
    }
    return 0;
}
