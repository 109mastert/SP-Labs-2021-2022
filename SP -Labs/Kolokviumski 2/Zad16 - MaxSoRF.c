#include <stdio.h>
#include <stdlib.h>

int findmvp(int x)
{
    if(x/10==0)
        return x%10;
    else
    {
        if(x%10<findmvp(x/10))
            return findmvp(x/10);
        else
            return x%10;
    }
}

int main()
{
    int x;
    while(scanf("%d",&x))
    {
        printf("%d\n",findmvp(x));
    }

    return 0;
}
