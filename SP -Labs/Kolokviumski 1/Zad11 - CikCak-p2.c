#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int a,pom,i,c,z=1,ap,app;
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

             //a<5, b>=5, c<5, d>=5 или a>=5, b<5, c>=5, d<5

             ap=app=0;
             for(i=c-1;i>=0;i--)
             {
                 if(z%2!=0)
                 {
                     if(b[i]<5)
                        ap++;
                     else if(b[i]>=5)
                        app++;
                 }
                 else
                 {
                     if(b[i]>=5)
                        ap++;
                     else if(b[i]<5)
                        app++;
                 }
                z++;
             }

             if(app==c || ap==c)
                printf("%d\n",a);
        }

    }
    return 0;
}
