#include <stdio.h>
int main()
{
    //den *100 +mesed *1000+godina
    int den,god,mesec,mat,us,p,p1,c;
    scanf("%d",&mat);
    //01 12 998
    den = mat / 100000;
    mesec = mat %100000 / 1000;
    god = 1000+mat%1000;
    us = den*100+mesec*1000+god;
    c=0;
    p1=us;
    while(p1)
    {
        c++;
        p1/=10;
    }
    printf("%d\n",us);
    if(c==4)
        {
        if(god<=1960)
            us+=70000;
        if((god>=1961)&&(god<=1980))
            us+=80000;
        if((god>=1981)&&(god<=1999))
            us+=90000;
        }

    printf("%d",us);
   // if(god)
    return 0;
}
