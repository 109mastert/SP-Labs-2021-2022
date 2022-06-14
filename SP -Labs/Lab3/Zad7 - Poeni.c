    #include <stdio.h>
    int main()
    {
        int poeni,p,vtora;
        char a;
        scanf("%d",&poeni);
        vtora= poeni%10;
        if((vtora>=1)&&(vtora<=3))
            a = '-';
        else if ((vtora>=4)&&(vtora<=7))
            a = ' ';
        else
            a = '+';

        if((poeni>100)||(poeni<0))
            printf("Nevalidna vrednost za poeni!");
        else if(poeni>=91)
            printf("Ocenka 10%c",a);
        else if(poeni>=81)
            printf("Ocenka 9%c",a);
        else if(poeni>=71)
            printf("Ocenka 8%c",a);
        else if(poeni>=61)
            printf("Ocenka 7%c",a);
        else if(poeni>=51)
            printf("Ocenka 6%c",a);
        else
            printf("Ocenka 5");

        return 0;
    }
