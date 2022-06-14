#include <stdio.h>
int main()
{
    //tri tocki  A B C
    float x,y,x1,y1,y2,x2,d1,d2,d3;
    char o;
    scanf("%f%f%f%f%f%f",&x,&y,&x1,&y1,&x2,&y2);
    //x y     x1 y1      x2  y2
    // A        B          C
    d1 = sqrt(((x1-x)*(x1-x))+((y1-y)*(y1-y)));
    d2 = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    d3 = sqrt(((x2-x)*(x2-x))+((y2-y)*(y2-y)));
    if ((d1>=d2)&&(d1>=d3))
        printf("AB");
    else if((d2>=d3)&&(d2>=d1))
        printf("BC");
    else
        printf("AC");
    return 0;
}
//first tryyyy
