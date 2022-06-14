#include <stdio.h>
#include <stdlib.h>
void readMatrix(int a[100][100], int n, int m)
{
    int i,j,flag=0,suma[m],mins,mink;
    for(i=0;i<m;i++)
        suma[i]=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            suma[j]+=a[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        if(flag==0)
        {
            mins=suma[i];
            mink=i;
        }
        else
        {
            if(mins>suma[i])
            {
                mins=suma[i];
                mink=i;
            }
        }
        flag++;
    }
    printf("%d",mink);
}
int main()
{
    int n,m,a[100][100];
    scanf("%d%d",&n,&m);
    readMatrix(a,n,m);
    return 0;
}
