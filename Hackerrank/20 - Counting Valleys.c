#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    char a[n];
    int count = 0;
    int valley = 0;
    for(int i = 0; i < n;i++)
    {
        scanf("%s",&a[i]);
    }
    for(int j = 0; j < n; j++)
    {
        if(a[j] == 'U')
        {
            count++;
            if(count == 0)
            {
                valley++;
            }
        }
        else if(a[j]=='D'){
            count--;  
        }
    }
    printf("%d",valley);
    return 0;
}