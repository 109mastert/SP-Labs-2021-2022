#include <stdio.h>

void writeToFile() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

void printFile() {

    FILE *f=fopen("output.txt","r");
    char line[100];
    while(!feof(f)){
        fgets(line,100,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}

int main() {;
    writeToFile();
    int n,i,j;
    FILE *in = fopen ("input.txt","r");
    FILE *out = fopen ("output.txt","w");
    fscanf(in,"%d",&n);
    int a[n][n],s=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            fscanf(in,"%d",&a[i][j]);
            if(i==j)
                s+=a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>i)
                fprintf(out,"%03d ",s);
            else if(j!=n-1)
                fprintf(out,"    ");
        }
        fprintf(out,"\n");
    }
    fclose(out);
    fclose(in);
    //Vasiot kod tuka


    printFile();
    return 0;
}
