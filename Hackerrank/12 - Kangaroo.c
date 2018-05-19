#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* kangaroo(long int x1, long int v1,long int x2, long int v2) {
    do{
    if((x1 > x2 && v1 > v2) || (x2 > x1 && v2 > v1 || (v2 - v1)==0))
    {
        return "NO";
    }
    else if((x1-x2)%(v2-v1) == 0)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
    }while(x1<= 10000 && x2<=10000 && v1<=10000 && v2<=10000 && x1>=0 && x2>=0 && v1>=1 && v2>=1);

}

int main() {
     long int x1;
     long int v1;
     long int x2;
     long int v2;
    scanf("%lu %lu %lu %lu", &x1, &v1, &x2, &v2);
    int result_size;
    char* result = kangaroo(x1, v1, x2, v2);
    printf("%s\n", result);
    return 0;
}
