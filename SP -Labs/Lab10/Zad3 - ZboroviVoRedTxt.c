#include <stdio.h>
#include <ctype.h>
#include <string.h>

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}
int main() {
    writeToFile();
    int wc=0,s=0,i,r=0,wb=0,hr,c=1;
    char l[250],ch;
    FILE *in = fopen("text.txt","r");
    do
    {
        if(ch=='\n')
        {
            r++;
            printf("%d\n",++wc);
            if(wb<wc)
            {
                hr=r;wb=wc;
            }
            s+=wc;
            wc=0;
        }
        else if (ch==' ')
            wc++;
    }
    while((ch=fgetc(in))!=EOF);
    printf("%.2f\n",(float)s/r);
    fclose(in);

    FILE *in1 = fopen("text.txt","r");

    //hr
    while((fgets(l,sizeof l,in1))!=NULL)
    {
        if(c==hr)
        {
            for(i=0;i<strlen(l);i++)
            {
                if(islower(l[i]))
                    printf("%c",toupper(l[i]));
                else if(isupper(l[i]))
                    printf("%c",tolower(l[i]));
                else
                    printf("%c",l[i]);
            }
            break;
        }
        else
            c++;
    }
    fclose(in1);


    // vasiot kod ovde
}
