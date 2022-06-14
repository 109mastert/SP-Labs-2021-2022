#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,ind,s=0;
    scanf("%d",&n);
    int *p;
    for(i=0;i<n;i++)
        scanf("%d",&*(p+i));
    scanf("%d",&ind);
    for(i=ind;i<n;i++)
        s+=*(p+i);
    printf("%d",s);
    return 0;
}
