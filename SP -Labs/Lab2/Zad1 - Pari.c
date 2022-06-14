#include <stdio.h>
int main()
{
    int a;
    float s,ddv;
    scanf("%d%f",&a,&s);
    ddv=s/100*18.0;
    s=s+ddv;
    if(a>s)
    {
        printf("1");
    }
    else
        printf("0");

    return 0;
}
