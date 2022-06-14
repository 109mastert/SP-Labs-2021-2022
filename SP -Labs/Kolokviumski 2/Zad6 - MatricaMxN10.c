#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,ar[100][100],ak[100][100],i,j,vk=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            scanf("%d",&ar[i][j]);
            ak[i][j]=ar[i][j];
        }
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            if(ar[i][j] && ar[i][j-1] && ar[i][j+1])
            {
                ar[i][j-1]=ar[i][j]=ar[i][j+1]=0;
                vk++;
            }
            if(ak[i][j] && ak[i-1][j] && ak[i+1][j])
            {
                ak[i-1][j]=ak[i][j]=ak[i+1][j]=0;
                vk++;
            }
        }
    printf("%d",vk);
    return 0;
}
