#include <stdio.h>
#include <stdlib.h>

int main()
{
    //0 2 4 6 8 sweet  m n
    int m,n,i,pom,pom2,br,size;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        pom2=i;
        size=0;
        while(pom2)
        {
            pom2/=10;
            size++;
        }
        pom=i;
        br=0;
        while(pom)
        {
            if(pom%10%2!=0)
            {
                break;
            }
            pom/=10;
            br++;
          //  printf("%d %d\n",pom,br);
        }
        if(br==size)
            {
                printf("%d",i);
                break;
            }
    }
    if(br==0)
        printf("NE");
}

