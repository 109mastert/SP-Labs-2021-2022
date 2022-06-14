#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int a[100][100],i,j,b[100][100],m,n,c,d;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==1)
            {
                b[i][j]=5;
            }
            else
                b[i][j]=0;
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            for(c=j-1;c<j+2;c++)
            {
                if(c==-1)
                    c++;
                for(d=i-1;d<i+2;d++)
                {
                    if(d==-1)
                        d++;
                    if(b[i][j]==5)
                    {
                        if(b[d][c]!=5)
                            a[d][c]++;
                    }
                }
            }
        }
    }
   for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i][j]==5)
                printf("* ");
            else
                printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
