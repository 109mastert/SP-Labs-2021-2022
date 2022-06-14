#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s[1000],x,x1,i,g1[1000],g2[1000],g3[1000],h1=0,h2=0,h3=0;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&x1);
        if(x1%10==0 || x1%10==1 || x1%10==2)
        {
            g1[h1]=x1;
            h1++;
        }
        if(x1%10==3 || x1%10==4 || x1%10==5)
        {
            g2[h2]=x1;
            h2++;
        }
        if(x1%10==6 || x1%10==7 || x1%10==8 || x1%10==9)
        {
            g3[h3]=x1;
            h3++;
        }
    }
    printf("Grupa 1\n");
    for(i=0;i<h1;i++)
        printf("%d ",g1[i]);
    printf("\nGrupa 2\n");
    for(i=0;i<h2;i++)
        printf("%d ",g2[i]);
    printf("\nGrupa 3\n");
    for(i=0;i<h3;i++)
        printf("%d ",g3[i]);
    return 0;
}
