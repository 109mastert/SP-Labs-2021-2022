#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,m,i,j,x,y,k[4]={0,0,0,0};
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    scanf("%d%d",&x,&y);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            if(i<x && j>=y)
                k[0]+=a[i][j];
            if(i<x && j < y)
                k[1]+=a[i][j];
            if(i>=x && j<y)
                k[2]+=a[i][j];
            if(i>=x && j>=y)
                k[3]+=a[i][j];
        }
    printf("%d %d %d %d",k[0],k[1],k[2],k[3]);
    return 0;
}
