#include <stdio.h>
#include <stdlib.h>
#include <string.h>

letterFrequency (char *text, char letter)
{
    int lower=0,upper=0;
    float l,u;
    letter=tolower(letter);
    for(int i=0;i<=strlen(text);i++)
    {
        if(text[i]==letter)
            lower++;
        else if(text[i]==toupper(letter))
            upper++;
    }
    l = lower*1.0 / (1.0*strlen(text)/100.0);
    u = upper*1.0 / (1.0*strlen(text)/100.0);
    printf("%c -> %.3f%%\n%c -> %.3f%%",letter,l,toupper(letter),u);
}

int main()
{
    char text[1000],letter,ch;
    int i=0;
    while((i<999)&&((ch=getchar())!='\n'))
        text[i++]=ch;
    text[i]='\0';
  //  printf("%s",text);
    scanf("%c",&letter);
    letterFrequency(text,letter);
    return 0;
}
