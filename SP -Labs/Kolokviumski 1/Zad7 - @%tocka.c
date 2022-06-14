#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,m,j;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        printf("%%");
        for(j=0;j<m-2;j++)
        {
            if(i==0 || i==m-1)
                printf("@");
            else
                printf(".");
        }
        printf("%%\n");
    }

    return 0;
}
