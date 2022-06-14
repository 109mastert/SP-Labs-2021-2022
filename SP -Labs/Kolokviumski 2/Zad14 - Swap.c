#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,j;
    scanf("%d",&n);
    int a[n*2][n*2];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n*2;j++)
        {
            scanf("%d",&a[i][j]);
            if(j>=n)
                a[n+i][j-n]=a[i][j];
        }
    }
    for(i=0;i<n*2;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    return 0;
}
