#include <stdio.h>
int main()
{
   //if lower than 500kwh 5den/kwh       +  150kwh  7.5den      +200kwh  11den             ++ 13.5den
   //if lower than 7k   ddv 10%     if bigget than 7k 18%ddv
    float c,p;
    int s;
    scanf("%d",&s);
    if(s<=500)
    {
        c=s*5;
    }
    else if(s<=650)
    {
        s-=500;
        c=(500*5)+(s*7.5);
    }
    else if(s<=850)
    {
        s-=650;
        c=(500*5)+(150*7.5)+(s*11);
    }
    else
    {
        s-=850;
        c=(500*5)+(150*7.5)+(200*11)+(s*13.5);
    }
    if(c<=7000)
    {
        p=c/10.0;
        c+=p;
    }
    else
    {
        p=c/100*18.0;
        c+=p;
    }
    printf("%.2f",c);
    return 0;
}
