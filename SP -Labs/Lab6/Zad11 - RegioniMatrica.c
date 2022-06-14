#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a[100][100],n,b[2][2];
    scanf("%d",&n);
    b[0][0]=b[1][0]=b[0][1]=b[1][1]=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(i+1<n/2+1 && j+1<n/2+1)
                b[0][0]+=a[i][j];
            if(i+1>n/2+1 && j+1<n/2+1)
                b[0][1]+=a[i][j];
            //za tret reg

            if(i+1<n/2+1 && j+1>n/2+1)
                b[1][0]+=a[i][j];
            //za vtor reg
            if(i+1>n/2+1 && j+1>n/2+1)
                b[1][1]+=a[i][j];
            //za 4v reg
        }
    }
    printf("%d %d\n%d %d",b[0][0],b[1][0],b[0][1],b[1][1]);
    return 0;
}
