#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int s=0,i,pom;
    char c[500];
    for(i=0;;i++)
    {
        scanf("%c",&c[i]);
        if(c[i]=='!')
            break;
    }
    pom=i;
    for(i=0;i<pom;i++)
    {
        if(isdigit(c[i]))
        {
            if(isdigit(c[i+1]))
            {
                s+=((int)c[i]-48)*10+(int)c[i+1]-48;
                i++;
            }
            else
                s+=(int)c[i]-48;
        }
    }
    printf("%d",s);
    return 0;
}
