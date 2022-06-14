#include <stdio.h>
int main()
{  // 31    28  31 30  31  30  31  31  30 31  30  31
    //                           avgust
    int den,mesec,god,d,v=0;
    scanf("%d%d%d",&den,&mesec,&god); //400 so 4 a ne so 100
    if(((god%400)==0)||(((god%4)==0)&&((god%100)!=0)))
            d=29;
    else
        d=28;
    if((mesec==1)||(mesec==3)||(mesec==5)||(mesec==7)||(mesec==8)||(mesec==10)||(mesec==12))
        d=31;
    else if((mesec==4)||(mesec==6)||(mesec==9)||(mesec==11))
        d=30;
    if ((den>=1)&&(den <= d));
    else v++;

    //validnost

    if((mesec>=1)&&(mesec<=12));
    else v++;
    if(v!=0)
        printf("NE");
    if(v==0)
        printf("DA");
    return 0;
}
