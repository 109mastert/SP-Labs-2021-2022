#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    float a[n][n],b[n][n],x=0.0,y=0.0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%f",&a[i][j]);
            if(j<i)
                x+=a[i][j];
            if(j+i>=n)
                y+=a[i][j];
            b[i][j]=0.0;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                b[i][j]+=x;
            if(i+j==n-1)
                b[i][j]+=y;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%.1f ",b[i][j]);
        printf("\n");
    }

    return 0;
}
