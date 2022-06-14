#include <stdio.h>
#include <stdlib.h>

float divide(int *a,int n, int i)
{
    if(n==1)
        return (float)a[0];
    else if(i==n-2)
        return (float)a[n-2]+(float)1/a[n-1];
    else
        return (float)a[i]+1/(divide(a,n,++i));
}

int main()
{
    int n,a[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("%f",divide(a,n,0));
    return 0;
}
