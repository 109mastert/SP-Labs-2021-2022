#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,pom;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);
    printf("\n");
    for(i=n-1;i>=0;i--)
    {
        if(n%2==0)
        {
            if(i%2!=0)
                printf("%d ",a[i]);
        }
        else
        {
            if(i%2==0)
                printf("%d ",a[i]);
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(n%2==0)
        {
            if(i%2!=0)
                printf("%d ",a[i]);
        }
        else
        {
            if(i%2==0)
                printf("%d ",a[i]);
        }
    }
    return 0;
}
