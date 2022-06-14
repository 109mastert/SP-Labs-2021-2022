#include <stdio.h>
#include <stdlib.h>

void printArray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}
int main()
{
    int n,i,pom,j;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printArray(a,n);
    for(i=0,j=n-1;i<n;i++,j--)
    {
        b[j]=a[i];
    }
    printArray(b,n);
    for(i=1,j=1;i<n;i++)
    {
        if(i%2!=0)
        {
            b[j]=b[i+1];
            j++;
        }
    }
    if(n%2!=0)
        printArray(b,n/2+1);
    else
        printArray(b,n/2);
    if(n%2==0)
    {
        for(i=0,j=0;i<n;i++)
    {
        if(i%2==0)
        {
            a[j]=a[i+1];
            j++;
        }
    }
        printArray(a,n/2);
    }
    else
    {
        for(i=1,j=1;i<n;i++)
    {
        if(i%2!=0)
        {
            a[j]=a[i+1];
            j++;
        }
    }
        printArray(a,n/2+1);
    }
    return 0;
}
