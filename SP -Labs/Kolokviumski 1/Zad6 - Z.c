#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,p=0,pz=0;
    float pr;
    scanf("%d",&z);
    while(scanf("%d%d",&x,&y))
    {
        if(x==0 && y==0)
            break;
        if(x+y == z)
            pz++;
        p++;
    }
    pr=100.0/p*pz*1.0;
    printf("Vnesovte %d parovi od broevi chij zbir e %d\nProcentot na parovi so zbir %d e %.2f%%",pz,z,z,pr);
    return 0;
}
