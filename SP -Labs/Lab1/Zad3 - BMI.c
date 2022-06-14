#include <stdio.h>
int main()
{
    //kg / height * height
    float a,b,c;
    scanf("%f%f",&a,&b);
    c= b/10.0;
    printf("%.2f",(a/(c*c))*100);
    return 0;
    //NE me prasuvaj kako rabote
}
