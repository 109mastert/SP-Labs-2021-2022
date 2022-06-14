#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,k,i,j,c,pom;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        int a[m];
        for(j=0;j<m;j++)
            scanf("%d",&a[j]);
        scanf("%d",&k);
        for(c=k-1;c<m;c+=k)
        {
            pom=a[c-1];
            a[c-1]=a[c];
            a[c]=pom;
        }
        for(j=0;j<m;j++)
        {
            printf("%d ",a[j]);
        }
        printf("\n");
    }
    return 0;
}
