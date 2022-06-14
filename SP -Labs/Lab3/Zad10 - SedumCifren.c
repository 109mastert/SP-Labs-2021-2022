#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b,p,c,prva,vtora,vtorax2;
    scanf("%d",&b);
    p=b;
    c=0;
    while(p)
    {
        c++;
        p/=10;
    }//1025250
    //7 cifren broj
    if(c == 7)
    {
        p=b;
        vtora = b%10; //0
       prva = p/10%10; //5
       p=b;
       p%=1000000; //025250
       vtorax2 = p/100000; //0
       if((vtora+prva)!=0) //5!=0
       {
        if(((b%(b/1000000))==0) && ( (b%(vtora+prva))!=0)) //1 && 0
        {
            printf("DA");
        }
        else if(vtorax2!=0) //
        {
            if(((b%(vtorax2))!=0) && ( (b%(vtora+prva))!=0))
                printf("DA");
            else
                printf("NE");
        }
        else if(((vtora+prva)==0)||(vtorax2==0))
                printf("Nevaliden broj");
        else
            printf("NE");
       }
       else
            printf("Nevaliden broj");
    }
    return 0;
}
