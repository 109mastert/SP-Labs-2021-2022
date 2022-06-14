#include <stdio.h>
#include <stdlib.h>

int broj(int x,int k)
{
    if(x>10)
    {
        if(x%10>k)
            return broj(x/10,k)*10+x%10;
        else
            return broj(x/10,k);
    }
    else if(x>k)
        return x;
    else
        return 0;
}
int ZbirNaCifri(int a)
{
    int pom,s=0;
    pom=a;
    while(pom)
    {
        s+=pom%10;
        pom/=10;
    }
    return s;
}
int main()
{
    int x,i,k,n;
    scanf("%d%d",&k,&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        printf("%d : %d\n",broj(x,k),ZbirNaCifri(broj(x,k)));
    }
}
