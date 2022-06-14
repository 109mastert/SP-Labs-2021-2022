#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    if(n>2)
    {
       for(i=n;i>=0;i--)
        {
            for(j=0;j<i;j++)
                printf("*");
            printf("\n");
        }
    }
    else
        printf("Nevaliden vlez");
    return 0;
}
