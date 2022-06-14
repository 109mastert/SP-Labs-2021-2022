#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,s,i,j,flag=0,max=0,maxbr;
    scanf("%d",&n);
    for(i=n-1;i>0;i--)//10
    {
        s=0;
        for(j=i/2;j>0;j--)//10
        {
            if(i%j==0)
                s+=j; //
        }
        if(flag==0)
        {
            max=s;
            if(s!=0)
                maxbr=i;
            flag++;
        }
        if(max<s)
        {
            max=s;
            maxbr=i;
        }
    }
    printf("%d",maxbr);
    return 0;
}
