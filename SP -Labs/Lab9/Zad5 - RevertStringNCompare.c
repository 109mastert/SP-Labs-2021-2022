#include <stdio.h>
#include <stdlib.h>
#include <string.h>

revertstring(char *a,char *b, char *c)
{
    // za zavrtenio string treba da provere koj e pogolem

    int i;
    char ra[strlen(a)],rb[strlen(b)];
    for(i=0;i<strlen(a);i++)  //revert za a u ra
        ra[strlen(a)-i-1]=a[i];
    ra[strlen(a)]='\0';
    for(i=0;i<strlen(b);i++)  //revert za b u rb
        rb[strlen(b)-i-1]=b[i];
    rb[strlen(b)]='\0';
    for(i=0;i<strlen(c);i++)
        c[i]=tolower(c[i]);
    if(!strcmp(c,"pomal"))
    {
        if(strcmp(ra,rb)>0)
            printf("%s\n",rb);
        else
            printf("%s\n",ra);
    }
    else if(!strcmp(c,"pogolem"))
    {
        if(strcmp(ra,rb)>0)
            printf("%s\n",ra);
        else
            printf("%s\n",rb);
    }
    else
        printf("Invalid comparator\n");
}

int main()
{
    char a[20],b[20],c[10];
    int i,n;
    //while((ch=getchar())!='\n')
     //   a[i++]=ch;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%s",a);
         scanf("%s",b);
         scanf("%s",c);
         revertstring(a,b,c);
     }
    return 0;
}
