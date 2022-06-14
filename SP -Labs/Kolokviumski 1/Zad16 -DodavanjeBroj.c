#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,d,p=0,nx=0,pom,flag=0;
    //x e broj, d se dodava na parni / neparni pozicii, p e pozicija, nx e novio broj
    scanf("%d%d",&x,&d);
    pom=x;
    while(pom)
    {
        if(p%2==0)
        {
            nx+=d*pow(10,p);
            p++;
        }
        nx+=pom%10*pow(10,p);
        pom/=10;
        p++;
    }
   // nx/=10;
    printf("%d\n",nx);
    return 0;
}
