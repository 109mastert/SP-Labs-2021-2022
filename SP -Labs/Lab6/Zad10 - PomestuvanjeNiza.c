#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,pom,pom1,k,j,d,c,b=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]<k)
            b++;
    }
    //8
    //1 3 2 5 9 0 8 10
    //5
    for(i=0;i<n;i++)
    {
        if(a[i]>=k)
        {
            if(i==b)
                break;
            for(j=i+1;j<n;j++)
            {
                if(a[j]<k)
                {
                    pom=a[j];
                    break;
                }
            }
            for(d=j;d>i;d--)
            {
                a[d]=a[d-1];
            }
            a[i]=pom;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
