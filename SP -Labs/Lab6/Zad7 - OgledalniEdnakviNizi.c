#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,d,oe=0,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        int a[m];
        for(j=0;j<m;j++)
            scanf("%d",&a[j]);
        for(j=0,d=m-1;j<m/2;d--,j++)
        {
            if(a[j]==a[d])
                oe++;
        }
        // 5    7 2 5 2 8
        if(m%2==0)
        {
            oe=oe*2;
        }
        else
            oe=oe*2+1;
        printf("%.2f%%\n",(float)oe/m*100);
        oe=0;
    }
    return 0;
}
