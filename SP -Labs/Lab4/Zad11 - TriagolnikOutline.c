#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    if(n>2)
    {

        printf("*\n");
       for(i=1;i<=n-2;i++)
        {
            printf("*");
            for(j=0;j<i;j++)
                if(i-1==j)
                    printf("*");
                else
                    printf(" ");
            printf("\n");
        }
        for(i=0;i<n;i++)
            printf("*");
    }
    else
        printf("Nevaliden vlez");
    return 0;
}
