    #include <stdio.h>
    #include <stdlib.h>
    int main()
    {
        int x,p,i,gp[1000],gpa[1000],h1=0,h2=0,zp=0,zpa=0;
        float pa,po;
        scanf("%d",&x);
        for(i=0;i<x;i++)
        {
            scanf("%d",&p);
            if(p<50)
            {
                zpa+=p;
                gpa[h1]=p;
                h1++;
            }
            else
            {
                zp+=p;
                gp[h2]=p;
                h2++;
            }
        }
        pa= 1.0 * zpa/h1;
        po=1.0* zp/h2;
        printf("Sredna vrednost na padnati %.2f\n",pa);
        for(i=0;i<h1;i++)
            printf("%d ",gpa[i]);
        printf("\n");
        printf("Sredna vrednost na polozeni %.2f\n",po);
        for(i=0;i<h2;i++)
            printf("%d ",gp[i]);
        return 0;
    }
