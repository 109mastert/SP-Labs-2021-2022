#include <stdio.h>
#include <ctype.h>

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
    FILE *f ;//= fopen("text.t","r");
    char ch;int l=0,u=0;float pr,p;
    if((f = fopen("text.txt","r"))== NULL)
        printf("Zaebal si gu batka");
    for(;;)
    {
        if((ch=fgetc(f))== EOF)
            break;
        //printf("%c\n",ch);
        if(islower(ch))
            l++;
        else if(isupper(ch))
            u++;
    }
        pr=l*1.0/((l+u)*1.0);
        p=u*1.0/((l+u)*1.0);
        printf("%.4f\n%.4f",p,pr);
    fclose(f);
    // vasiot kod ovde
}
