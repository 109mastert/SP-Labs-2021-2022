#include <stdio.h>
#include <stdlib.h>
#define pz printf("*")
#define ps printf(" ");

int main()
{
    int i,j,n;
    scanf("%d",&n);
    if(n>=5)
    {
    for(i=0;i<n;i++)
        pz;
    printf("\n");
    for(i=0;i<n-2;i++)
    {
        pz;
            for(j=0;j<n-2;j++)
            {
                if((i+j)==(n-3))
                    printf("*");
                else
                    printf(" ");
            }
        pz;
        printf("\n");
    }
    for(i=0;i<n;i++)
        pz;
    }
    return 0;
}
