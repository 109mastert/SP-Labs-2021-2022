#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n,x,cx,cn,pom,a[100],b[100],i,d,j;
    scanf("%d%d",&n,&x);
    pom=x;cx=0;
    while(pom)
    {
        b[cx]=pom%10;
        pom/=10;
        cx++;
    }
    pom=n;cn=0;
    while(pom)
    {
        a[cn]=pom%10;
        pom/=10;
        cn++;
    }
    n1=n-1;
    for(j=0;j<cn;j++)
    {
            for(i=0;i<cx;i++)
        {
            pom=n1;cn=0;
            while(pom)
            {
                a[cn]=pom%10;
                pom/=10;
                cn++;
            }
            if(a[j] == b[i])
            {
                n1--;//treba da se debagne poubo tuka prae negde problem kad se namale od dvocifren
                pom=n1;cn=0;
                while(pom)
                {
                    a[cn]=pom%10;
                    pom/=10;
                    cn++;
                }
                a[j]=n1;
                j=0;
                //n1-=pow(10,j);
                i=-1;
            }
        }
      //  printf("El numero %d",n1);
    }

    printf("%d\n",n1);

    return 0;
}
