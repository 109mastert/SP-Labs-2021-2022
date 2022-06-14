#include <stdio.h>
int main()
{
    int v,h,m,s;
    scanf("%d",&v);
    h=v/3600;
    m=v%3600/60;
    s=v%3600%60;
    printf("%d sekundi se %d casovi, %d minuti i %d sekundi",v,h,m,s);
    return 0;
}
