#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    if(n>2)
    {
        for(i=0;i<n;i++)
            printf("*");
            printf("\n");
       for(i=n-1;i>=2;i--)
        {
           // for(i=)

            printf("*");
            for(j=0;j<i;j++)
                if(i-2==j)
                    printf("*");
                else
                    printf(" ");
            printf("\n");
        }
        printf("*\n");
    }
    else
        printf("Nevaliden vlez");
    return 0;
}
