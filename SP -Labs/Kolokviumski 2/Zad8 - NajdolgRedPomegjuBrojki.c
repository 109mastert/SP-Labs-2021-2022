#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
// ne menuvaj ovde
void wtf() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
int findf(char *s)
{
    int i;
    for(i=0;;i++)
    {
        if(s[i]=='\0')
            break;
        if(isdigit(s[i]))
            return i;
    }

}
int findl(char *s)
{
    int i,l;
    for(i=0;;i++)
    {
        if(s[i]=='\0')
            break;
        if(isdigit(s[i]))
            l=i;
    }
    return l;
}
int diff(char *s)
{
    return abs(findf(s)-findl(s))+1;
}


int main() {
    wtf();
	// vasiot kod ovde
	FILE *in = fopen("dat.txt","r");
	int i=0,flag=0,c=0,j,l;
	char s[100],ch,ps[100];
	for(;;)
      {
            if((ch=fgetc(in))!=EOF)
            {
                s[i++]=ch;
                while((ch=fgetc(in))!='\n' && ch!=EOF)
                    s[i++]=ch;
                s[i]='\0';
                if((flag++)==0 || diff(s)>=diff(ps))
                {
                    l=findl(s);
                    for(j=findf(s);j<=l;j++)
                        ps[c++]=s[j];
                    ps[c]='\0';
                }
                i=0;c=0;
            }
            else
                break;
      }
      printf("%s\n",ps);
    fclose(in);


}
