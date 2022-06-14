#include <stdio.h>
#include <stdlib.h>

int broj(x)
{   //54321
    if(x>10)
    {
        if(x<100 && x%10<x/10)
            return 1;
        if(x%10<x/10%10)
            return broj(x/10);
        else
            return 0;
    }
    else
        return 0;
}
int main()
{
    int x,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        printf("%d\n",broj(x));
    }
    return 0;
}
