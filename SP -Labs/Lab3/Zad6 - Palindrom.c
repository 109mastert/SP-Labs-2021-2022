#include <stdio.h>
int main()
{
    //palindrom 5cifren
    int p,a,c=0;
    scanf("%d",&a);
    p=a;
    while(p)
    {
        c++;
        p/=10;
    }
    if(c!=5)
        printf("Nevaliden vlez");
    else if (c==5)
    {
        //78887
        if((a/10000)==(a%10))
        {
            a%=10000;  //8887
            a/10; //888
            if((a/100)==(a%10)) //5  ==  5
                printf("Palindrom");
            else
            {
                printf("Ne e palindrom");
                printf("sinka2");
            }
        }
        else
            {
                printf("Ne e palindrom");
                printf("sinka1");
            }
    }
    return 0;
}
