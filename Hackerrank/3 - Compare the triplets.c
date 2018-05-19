#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int a0;
    int a1;
    int a2;
    scanf("%d %d %d", &a0, &a1, &a2);

    int b0;
    int b1;
    int b2;
    scanf("%d %d %d", &b0, &b1, &b2);
    int alicescore = 0;
    int bobscore = 0;


    if(a0 > b0)
    {
        alicescore+=1;
    }
    else if(a0 < b0)
    {
        bobscore+=1;
    }
    else if(a0 == b0)
    {
        alicescore+=0;
        bobscore+=0;
    }
     if(a1 > b1)
    {
        alicescore+=1;
    }
    else if(a1 < b1)
    {
        bobscore+=1;
    }
    else if(a1 == b1)
    {
        alicescore+=0;
        bobscore+=0;
    }
    if(a2 > b2)
    {
        alicescore+=1;
    }
      else if(a2 < b2)
    {
        bobscore+=1;
    }


    else if(a2 == b2)
    {
        alicescore+=0;
        bobscore+=0;
    }

    printf("%d",alicescore);
    printf(" ");
    printf("%d",bobscore);

    return 0;
}
