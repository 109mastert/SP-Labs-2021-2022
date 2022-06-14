    #include <stdio.h>
    int main()
    {
        int b;
        scanf("%d",&b);
        if(((b%3)==0) ||((b%5)==0))
        {
            if(((b%3)==0) && ((b%5)==0))
                printf("Tik - Tak");
            else if((b%3)==0)
                printf("Tik");
            else if((b%5)==0)
                printf("Tak");
            }
        else
            printf("Losh broj");
        return 0;
    }
