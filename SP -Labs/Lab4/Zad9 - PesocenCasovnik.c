#include <stdio.h>
#include <stdlib.h>
#define pz printf("*");
#define pn printf("\n");
#define ps printf(" ");

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        pz;
    pn;
    for(i=0;i<n-2;i++)
    {
        printf(" ");
        for(j=0;j<n-2;j++)
        {
            if(i==j)
                printf("*");
            else if((i+j)==(n-3))
                printf("*");
            else
                printf(" ");
        }
        pn;
    }
    for(i=0;i<n;i++)
        pz;
    return 0;
}
