#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,pom,br,pom2,pom3,pom4,c;
    scanf("%d%d",&a,&b);
    pom=a;c=0;
    while(pom)
    {
        pom2=pom%10;
        pom/=10;
        br=0;
        pom3=b;
        while(pom3)
        {
            pom4=pom3%10;
            if(pom4==pom2)
                br++;
            pom3/=10;
        }
        if(br!=0)
        {
           // printf("%d ga ima %d\n",pom2,br);
            br++;
        }
        else
        {
            printf("NE");
            c++;
            break;
        }
    }
    if(c==0)
        printf("DA");
    return 0;
}
