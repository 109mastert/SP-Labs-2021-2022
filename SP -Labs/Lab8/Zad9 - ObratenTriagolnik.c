#include <stdio.h>
#include <stdlib.h>

int tri(int pom,int i,int n)
{
    if(pom<i)
    {
        printf("%d",pom);
        return tri(++pom,i,n);
    }
    else if (i!=n+1)
    {
        printf("\n");
        return tri(1,++i,n);
    }
    else
        return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    tri(1,2,n);
    return 0;
}
