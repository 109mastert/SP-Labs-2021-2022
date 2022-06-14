#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    //a>b, b<c, c>d, d<e или a<b, b>c, c<d, d>e
    int a,pom,i,c,z=0,ap,app;
    while(scanf("%d",&a))
    {
        if(a<10);
        else
        {
            // printf("%d\n",a);
             pom=a;i=0;c=0;
             while(pom)
             {
                 pom/=10;
                 c++;
             }
             pom=a;
             //printf("%d\n",c);
             int b[c],i;
             for(i=0;i<c;i++)
             {
                 b[i]=pom%10;
                 pom/=10;
             }
            /* for(i=0;i<c;i++)
             {
                 printf("%d\n",b[i]);
             }*/
             ap=app=0;
             for(i=c-1;i>0;i--)
             {
                 if(z%2!=0)
                 {
                     if(b[i]>b[i-1])
                        ap++;
                     else if(b[i]<b[i-1])
                        app++;
                 }
                 else
                 {
                     if(b[i]<b[i-1])
                        ap++;
                     else if(b[i]>b[i-1])
                        app++;
                 }
                z++;
             }
             if(app==c-1 || ap==c-1)
                printf("%d\n",a);
        }

    }
    return 0;
}
