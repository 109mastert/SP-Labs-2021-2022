#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,m,n,s1,s2;
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
    {
        s1=s2=0;
        for(j=0;j<n;j++)
        {
            if(n%2==0)
            {
                if(j<n/2)
                    s1+=a[i][j];
                else// if(j>n/2)
                    s2+=a[i][j];
            }
            else
            {
                if(j<=n/2)
                    s1+=a[i][j];
                if (j>=n/2)
                    s2+=a[i][j];
            }
        }
        if(n%2==0)
            a[i][j/2-1]=a[i][j/2]=abs(s1-s2);
        else
            a[i][j/2]=abs(s1-s2);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    return 0;
}
