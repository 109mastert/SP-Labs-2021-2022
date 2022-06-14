#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,n,i,d[100],min,flag;
    scanf("%d",&n);
    flag=0;min=0;
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        d[i]=(abs(a-b)+abs(b-c));
        if(flag!=0)
        {
            if(min>d[i])
                min=d[i];
        }
        else
            min=d[0];
        flag++;
    }
    printf("%d",min);
    return 0;
}
