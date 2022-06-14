#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    if(n>2)
    {
        for(i=0;i<n-1;i++)
        {
            printf(" ");
        }
        printf("*\n");
       for(i=0;i<n-2;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(i+j!=n-2)
                    printf(" ");
                else
                    printf("*");
            }
            printf("*\n");
        }

        for(i=0;i<n;i++)
            printf("*");
    }
    else
        printf("Nevaliden vlez");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
