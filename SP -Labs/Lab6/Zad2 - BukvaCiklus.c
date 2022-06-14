#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,k;
    char c,d;
    scanf("%c%d",&c,&k);
    while(i<=k)
    {
        i++;c++;
        if(c=='[')
            c='A';
    }
    printf("%c",c);
    return 0;
}
