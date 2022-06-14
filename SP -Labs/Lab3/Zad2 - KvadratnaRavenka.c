    #include<stdio.h>
    int main()
    {
        //b*b - 4ac >0 dve realni resenija    if =0 edno dvojno realno resenie     if <0 nema resenija    vlez a,b,c
        int a,b,c;
        float x1,x2;
        scanf("%d%d%d",&a,&b,&c);
        if((b*b-4 * a *c)>0)
        {
            x2=(-b-sqrt(b*b-4*a*c))/(2*a);
           // x2 = ((-b + sqrt(b*b-4*a*c))/2*a);
            x1= (-b+sqrt(b*b-4*a*c))/(2*a);
          //  x1 = ((-b - sqrt(b*b-4*a*c))/2*a);
            printf("Reshenija na ravenkata se: %.2f i %.2f",x2,x1);
        }
        //1 2 1
        else if((b*b-4 * a *c)==0)
        {
            x1 = (-b + sqrt(b*b-4*a*c))/2*a;
            printf("Dvojno reshenie na ravenkata e: %.2f",x1);
        }
        else if((b*b-4 * a *c)<0)
          printf("Ravenkata nema realni reshenija");
        return 0;
    }
