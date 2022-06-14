#include <stdio.h>
#include <stdlib.h>
void elka(int n)
{
    int i,j,pom,p=0,pm;
    pom=n;
    while(pom)
    {
        p++;pom-=2;
        if(pom<0)
            pom=0;
    }
    pm=n/2;
    for(i=0;i<p;i++)
    {
        for(j=0;j<pm;j++)
            printf(" ");
        for(j=0;j<n-(pm*2);j++)
            printf("*");
        for(j=0;j<pm;j++)
            printf(" ");
        printf("\n");
        pm--;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    elka(n);
    return 0;
}
