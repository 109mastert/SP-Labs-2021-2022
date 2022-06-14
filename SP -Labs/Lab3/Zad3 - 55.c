#include <stdio.h>
int main()
{
    int a1,a,c1,c2,c3,c4,i,pet;
    float z,p;
    // 4cifri
    scanf("%d",&a);
    a1=a;
    p=a/100.0;
    c1= a/1000;
    a%=1000;
    c2=a/100;
    a%=100;
    c3=a/10;
    a%=10;
    c4=a;
    pet=0;
    if((c1/5)!=0)
    {
        c1=6;
        pet++;
    }
    if((c2/5)!=0)
    {
        c2=6;
        pet++;
    }
    if((c3/5)!=0)
    {
        c3=6;
        pet++;
    }
    if((c4/5)!=0)
    {
        c4=6;
        pet++;
    }
    a=c1*1000+c2*100+c3*10+c4;
    z=(a-a1)/p*1.0;
    if(pet!=0)
        printf("%.4f%%",z);
    else
        printf("Error");
    return 0;
}
