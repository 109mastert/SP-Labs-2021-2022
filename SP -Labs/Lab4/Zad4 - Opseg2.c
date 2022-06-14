#include <stdio.h>
int main()
{
    int a,b,i,br,suma,pom;
    scanf("%d%d",&a,&b);
    br=0;
    for(;a<=b;a++)
    {
        pom = a;
        suma=0; //18
        while(pom)
        {
            if((((pom%10)%2)==0)&&(((pom%10)%3)!=0))
                suma+=pom%10;
            pom/=10;
        }
        //printf("%d\n",suma);
            if((suma>0)&&(suma%7==0))
            {
                printf("%d\n",a);
                br++;
            }
    }
    printf("Vkupno: %d",br);

    return 0;
}
