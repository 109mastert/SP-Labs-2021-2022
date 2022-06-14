#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,m,n,x,v;
    scanf("%d%d%d",&x,&m,&n);
    int a[m][n],r[m];
    for(i=0;i<m;i++)
        r[i]=0;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            r[i]+=a[i][j];
        }
    for(i=0;i<m;i++)
    {
        if(r[i]>x)
            v=1;
        else if(r[i]<x)
            v=-1;
        else
            v=0;
      for(j=0;j<n;j++)
      {
          a[i][j]=v;
          printf("%d ",a[i][j]);
      }
      printf("\n");
    }


    return 0;
}
