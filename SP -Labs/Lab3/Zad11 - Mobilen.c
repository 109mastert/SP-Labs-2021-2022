#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mob,xx,yyy,zzz,x;
    char a;
    scanf("%d",&mob);
    //77 517 736
    xx= mob/1000000;
    yyy=mob%1000000/1000;
    zzz=mob%1000;
    x=xx%10;
    if((x==0)||(x==1)||(x==2))
    {
        printf("0%d/%03d-%03d T-mobile",xx,yyy,zzz);
    }
    if((x==5)||(x==6)||(x==7)||(x==8))
    {
        printf("0%d/%0d-%0d A1",xx,yyy,zzz);
    }
    if(x==9)
    {
        printf("0%d/%03d-%03d LycaMobile",xx,yyy,zzz);
    }
    return 0;
}
