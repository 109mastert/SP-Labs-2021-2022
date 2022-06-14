#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    if(n>2)
    {
       for(i=1;i<=n;i++)
        {
            for(j=0;j<n-i;j++)
                printf(" ");
            for(j=0;j<i;j++)
                printf("*");
            printf("\n");
        }
    }
    else
        printf("Nevaliden vlez");
    return 0;
}
