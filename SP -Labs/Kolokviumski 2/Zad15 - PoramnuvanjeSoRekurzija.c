#include <stdio.h>
#include <stdlib.h>

int poramnet(int a)
{
    if(a/10==0)
    {
        if(a%10==9)
            return 7;
        else
            return a%10;
    }
    else
    {
        if(a%10==9)
            return 7+poramnet(a/10)*10;
        else
            return a%10+poramnet(a/10)*10;
    }
}
int sort(int *l,int n)
{
    int i,pom;
    for(i=0;i<n;i++)
    {
        if(l[i]>l[i+1])
        {
            pom=l[i];
            l[i]=l[i+1];
            l[i+1]=pom;
            i=-1;
        }
    }
    if(n>5)
    {
        for(i=0;i<5;i++)
            printf("%d ",l[i]);
    }
    else
    {
        for(i=0;i<n+1;i++)
            printf("%d ",l[i]);
    }
}
int main()
{
    int x,lowest[100],b=0;
    while(scanf("%d",&x))
        lowest[b++]=poramnet(x);
    sort(lowest,b-1);
    return 0;
}
