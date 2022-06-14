#include <stdio.h>
#include <ctype.h>

void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
void sort(int *a,int n)
{
    int i,j,pom;
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            pom=a[i];
            a[i]=a[i+1];
            a[i+1]=pom;
            i=-1;
        }
    }
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    printf("\n");
}

int main() {
    wtf();
    FILE *in = fopen("input.txt","r");
    char ch;
    int n=0,a[100],i;
    for(;;)
    {
        if((ch=fgetc(in))==EOF)
            break;
        if(isdigit(ch))
            a[n++]=ch-48;
        while((ch=fgetc(in))!='\n')
        {
            if(isdigit(ch))
            a[n++]=ch-48;
        }
        printf("%d:",n);
        sort(a,n);
        n=0;
    }
    fclose(in);

 //   for(i=0;i<n;i++)
   //     printf("%d ",a[i]);
    return 0;
}
