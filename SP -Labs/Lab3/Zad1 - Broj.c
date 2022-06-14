#include <stdio.h>
int main()
{
    //if 7 cifren ,  site poseban red  , zbir, prozivod se u nov red
    int b,c=0,p,a1,a2,a3,a4,a5,a6,a7;
    scanf("%d",&b);
    p=b;
    while(b)
    {
        c++;
        b/=10;
    }
    if(c==7)
    {
        printf("%d\n",p/1000000);
        a1=p/1000000;
        p%=1000000;
        printf("%d\n",p/100000);
        a2=p/100000;
        p%=100000;
        printf("%d\n",p/10000);
        a3=p/10000;
        p%=10000;
        printf("%d\n",p/1000);
        a4=p/1000;
        p%=1000;
        printf("%d\n",p/100);
        a5=p/100;
        p%=100;
        printf("%d\n",p/10);
        a6=p/10;
        p%=10;
        printf("%d\n",p);
        a7=p;
        printf("%d\n%d",a1+a2+a3+a4+a5+a6+a7,a1*a2*a3*a4*a5*a6*a7);
    }
    else
        printf("Vneseniot broj ne e 7 cifren!");
    return 0;
}
