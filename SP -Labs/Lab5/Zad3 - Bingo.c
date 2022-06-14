#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1-90     8+ broja    stops when 90+
    //vtorata cifra od prvite 7 cifri e dzoker se slepuvaat ustvari     %10  * 10
    int a[100],z,j,i,br,b;
    br=0;z=0;j=0;
    for(i=0;;i++)
    {
        scanf("%d",&b);
        if((z>7)&&((b>90)||(b<=0)))
            break;
        else if (b>90)
            continue;
        else
        {
           // printf("%d   brojce\n",b);
            a[z]=b;
            //printf("%d   zapisan broj\n",a[z]);
            if(z<7)
            {
                j=j*10+b%10;
                //printf("%d   joker\n",j);
            }
            else
                j+=b;
            z++;
        }
    }
    printf("%d",j);
    return 0;
}
