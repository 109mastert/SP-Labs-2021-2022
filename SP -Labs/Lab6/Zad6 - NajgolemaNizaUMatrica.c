#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,j,max=0,max1=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(a[i][j-1]<a[i][j])
            {
                if(max1==0)
                    max1++;
                max1++;
            }
            else
            {
                if(max1>max)
                    max=max1;
                max1=1;
            }
        }
        if(max1>max)
            max=max1;
        max1=0;
    }
    printf("%d",max);
    return 0;
}
