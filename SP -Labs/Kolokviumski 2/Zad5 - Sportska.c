#include <stdio.h>
#include <string.h>

// ne menuvaj ovde
void wf() {
    FILE *f = fopen("livce.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
         wf();
	// vasiot kod pocnuva od ovde
    int u,t,flag=0,maxt;
    double k,vk=1,maxk;
    char s[10],smax[10];
    FILE *in = fopen("livce.txt","r");
    fscanf(in,"%d",&u);
    for(;;)
    {
        if((fscanf(in,"%s%d%lf",s,&t,&k))==EOF)
            break;
        vk*=k;
        if(flag==0)
        {
            flag++;
            maxk=k;
            strcpy(smax,s);
            maxt=t;
        }
        else
        {
            if(maxk<k)
            {
                maxk=k; strcpy(smax,s); maxt=t;
            }
        }
    }
    printf("%s %d %.2lf\n%.2lf\n",smax,maxt,maxk,(double)vk*u);

    fclose(in);
	return 0;

}
