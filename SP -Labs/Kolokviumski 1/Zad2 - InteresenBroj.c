#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,on,pom,c,r;
    //n>9; da se najde najgolemiot interesen broj pomal od n if n<9 nevaliden
    //interesen e ako obratnio se dele so brojo na cifri
    scanf("%d",&n);
    if(n>9)
    {
        for(i=n-1;i>=9;i--)
        {//990
            r=0;c=0;
            on=0;
            pom=i;
            while(pom)
            {
                on=on*10+pom%10;
                pom/=10;
            }
            //obratnio ga iamo
            pom=i;
            while(pom)
            {
                pom/=10;
                c++;
            }
            if(on%c==0)
            {
                printf("%d",i);
                r++;
                break;
            }
            if(r!=0)
                break;
        }
    }
    else
        printf("Brojot ne e validen");
    return 0;
}
