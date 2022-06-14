#include <stdio.h>
#include <stdlib.h>

int tri(int i,int n)
{
    if(i<n)
    {
        printf("%d ",i);
        return tri(++i,n);
    }
    else if (n!=0)
    {
        printf("%d\n",n);
        return tri(i=1,--n);
    }
    else
        return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    tri(1,n);
    return 0;
}
