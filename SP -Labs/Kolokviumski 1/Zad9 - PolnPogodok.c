#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    char a;
    int s=0,x;
    while(scanf("%s",&a))
    {
        if(a=='.')
            break;
        if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
        {
           a=toupper(a);
           x=(a-55);
           s+=x;
        }
        else
        {
            x= a-48;
            s+=x;
        }

    }
    //116        16
    if(s%16==0)
    {
        if(s%10==6 && s/10%10==1)
            printf("Poln pogodok");
        else
            printf("Pogodok");
    }
    else
        printf("%d",s);
    return 0;
}
