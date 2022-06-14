#include <stdio.h>
#include <stdlib.h>

void wtf()
{
    FILE *input = fopen("input.txt","w");
    char ch;
    while((ch=getchar())!= '#')
        fputc(ch,input);
    fclose(input);
}

int main()
{
    wtf();
    FILE *in = fopen("input.txt","r");
    char p,z1,z2,x;
    scanf("%c%c%c",&p,&z1,&z2);
    for(;;)
    {
        if((x=fgetc(in))==EOF)
            break;
        if(x==z1)
        {
            while(((x=fgetc(in))!=z2) && (x!=EOF))
                printf("%c",x);
            printf("\n");
        }
    }
    fclose(in);
    return 0;
}
