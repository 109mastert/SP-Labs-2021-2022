#include <stdio.h>
#include <stdlib.h>

int broj(x,p)
{
    if(x>10)
    {
        if(p%2==0)
            return x%10+broj(x/10,++p);
        else
            return broj(x/10,++p);
    }
    else
    {
        if(p%2==0)
        {
            p++;
            return x%10+broj(x/10,p);
        }
        else
            return 0;
    }
}

int main()
{
    int x,p=1;
    scanf("%d",&x);
    printf("%d",broj(x,p));
    return 0;
}
