#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,sd=0,gd=0,zpk=0,zpok=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(i+j==n-1)
                sd+=a[i][j];
            if(i==j)
                gd+=a[i][j];
            if(j==0)
                zpk+=a[i][j];
            if(j==n-1)
                zpok+=a[i][j];
        }
    }
    printf("%d\n%d",gd-sd,zpk-zpok);
    return 0;
}
