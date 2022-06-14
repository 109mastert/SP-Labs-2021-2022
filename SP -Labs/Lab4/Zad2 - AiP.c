#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,p,cifra,pom,br=0;
    int zbir=0;
    float pr;
    scanf("%d %d",&a,&p);
    for(int i=a;i>=1;i--){
        pom=i;
        while(pom>0){
            cifra=pom%10;
            zbir+=cifra;
            pom/=10;
        }
        pr=(p/100.0)*i;
        if(zbir==pr){
            printf("%d\n",i);
            br++;
        }
        if(br>4)
            break;
        zbir=0;
    }
    if(br==0)
        printf("NEMA");
    return 0;
}
