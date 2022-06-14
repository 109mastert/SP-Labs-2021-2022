#include <stdio.h>
#include <stdlib.h>
int obratenbroj(int x)
{
    int pom,ob=0;
    pom=x;
    while(pom)
    {
        ob=ob*10+pom%10;
        pom/=10;
    }
    return ob;
}
int sum(int x)
{
    int pom,c=0;
    pom=x;
    while(pom)
    {
        c+=pom%10;
        pom/=10;
    }
   return c;
}
void pecatiVoInterval (int a, int b)
{
    int i,ob,s;
    for(i=a;i<=b;i++)
    {
        ob=i+obratenbroj(i);
        s=sum(ob);
        if(ob%s==0)
            printf("%d\n",i);
    }
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    pecatiVoInterval(a,b);
    return 0;
}
