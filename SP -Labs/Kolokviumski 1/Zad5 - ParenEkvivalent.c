#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,a1,pom,g=1;
    scanf("%d%d",&a,&b);
    pom=a;
    while(pom) //12345678    1357
    {
        if(g%2==0)
        {
            a1=a1*10+pom%10;
        }
        pom/=10;
        g++;
    }
    pom=a1;a1=0;
    while(pom)
    {
        a1=a1*10+pom%10;
        pom/=10;
    }

   // printf("%d\n",a1);

    if(a<=0||b<=0)
    {
        printf("Invalid input");
    }
    else if(a1==b)
    {
        printf("PAREN");
    }
    else
        {
        printf("NE");
        }

    return 0;
}
