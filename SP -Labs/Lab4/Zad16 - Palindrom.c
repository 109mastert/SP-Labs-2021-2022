#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,m,n,pom,pom2,br;
    scanf("%d%d",&m,&n);
    pom=i;br=0;
    for(i=m;i<=n;i++)
    {
        pom=i;
        pom2=0;
        while(pom)
        {
            pom2=pom2*10+pom%10;
            pom/=10;
        }
        if((i+pom2)<=(i*2))
        {
            printf("%d\n",i);
            br++;
        }
    }
    printf("Vkupno: %d",br);
    return 0;
}
