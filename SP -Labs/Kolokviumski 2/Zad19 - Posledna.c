#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
char move(char b,int x)
{
    int i; char c;
    for(i=0,c=b;i<x;i++,c++)
    {
        if(c=='Z')
            c='A';
        if(c=='z')
            c='a';
    }
    if(c=='{')
        c=='a';
    return c;
}

int main()
{
   int n,i,j=0,x,c=0;
   char ch,s[81],pom;
   scanf("%d",&n);
   scanf("%d",&x);
    scanf("%c",&pom);//za enter da ga cancelne e voa very effective
   for(i=0;i<n;i++)
   {
        while((ch=getchar())!='\n')
            s[c++]=ch;s[c]='\0';
        for(j=0;j<strlen(s);j++)
        {
             if(isalpha(s[j]))
                 s[j]=move(s[j],x);
        }
        printf("%s",s);
        printf("\n");
        c=0;
    }
    return 0;
}
