#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int m,n,i,j,max;
    scanf("%d%d",&m,&n);
    float r[m];int a[m][n];
    double maxr;
    for(i=0;i<m;i++)
        r[i]=0.0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            r[i]+=a[i][j];
        }
    }
    for(i=0;i<m;i++)
        r[i]/=(n*1.0);
    for(i=0;i<m;i++)
    {
        maxr=fabs(r[i]-a[i][0]); max=a[i][0];
        for(j=1;j<n;j++)
        {
            if(fabs(a[i][j]-r[i])>maxr )
            {
                maxr=fabs(a[i][j]-r[i]);
                max=a[i][j];
            }
        }
        printf("%d ",max);
    }
    return 0;
}
