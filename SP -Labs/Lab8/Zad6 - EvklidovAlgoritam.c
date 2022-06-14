#include <stdio.h>
#include <stdlib.h>

int nzs(int a, int b)
{
    if(a-(b*(a/b))!=0)
    {
        if(a-(b*(a/b))==0)
            return b;
        else
            return nzs(a=b,a-(b*(a/b)));
    }
    else
        return b;
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",nzs(a,b));
    return 0;
}
