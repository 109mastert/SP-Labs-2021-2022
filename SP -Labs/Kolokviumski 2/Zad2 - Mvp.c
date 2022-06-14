#include <stdio.h>
#include <string.h>
#define MAX 100

//ne menuvaj!
void wtf() {
    FILE *f = fopen("broevi.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
int mvp(int x)
{
    int pom=x,mvp;
    while(1)
    {
        if(!pom)
            break;
        mvp=pom%10;
        pom/=10;
    }
    return mvp;
}
int main()
{
    wtf();
    // vashiot kod ovde
    FILE *in = fopen("broevi.txt","r");
    int x,n,t,max,maxb;
    for(;;)
    {
        fscanf(in,"%d",&n);
        if(n!=0)
        {
            t=0;
            while(n)
            {
                fscanf(in,"%d",&x);
                if(t==0)
                {
                    t++;
                    max=mvp(x); maxb= x; //za najgolemata cifra i najgolemio broj
                }
                else
                {
                    if(max<mvp(x))
                    {
                        max=mvp(x);
                        maxb=x;
                    }
                    //printf("Najznacajnata cifra na %d e %d\n",x,mvp(x));
                }
                n--;
            }
            printf("%d\n",maxb);
        }
        else
            break;
    }

    fclose(in);
    return 0;
}
