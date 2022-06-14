#include <stdio.h>
#include <stdlib.h>

void f(int a)
{
    if(a>1)f(a--);
    printf("%d ",a*a);
}
int main()
{
    int *p1, *p2,a=10;
    p1=&a;
    p2=&(*p1);
    a--;p2++;
    printf("%d",*p1);
    return 0;
}
