#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x[200],i=0,zp,zc,max,pom;
   while(scanf("%d",&x[i]))
   {
       zc=0;max=0;
       pom=x[i];
       while(pom)
       {
           zc+=pom%10;
           pom/=10;
       }
       if(i==0)
           printf("%d: %d\n",x[0],zc);
        else
        {
            pom=x[i-1];max=pom%10;
            while(pom)
            {
                pom/=10;
                if(pom%10>max)
                    max=pom%10;
            }
            printf("%d: %d\n",x[i],zc+max);
        }
      i++;

   }
    return 0;
}
