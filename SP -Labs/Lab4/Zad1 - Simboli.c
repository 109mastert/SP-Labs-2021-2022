#include <stdio.h>
#define pz printf("*");
#define pn printf("\n");
#define ps printf(" ");
int main()
{
    //pogolem ili ednakov na 5 neparen broj
    int n,i,j,sd,mm;
    scanf("%d",&n);
    sd=0;mm=n-4;
    if((n>=5)&&(n%2!=0))
    {
        // pocnuva 1v red
        pz;
        for(i=0;i<n-2;i++)
            ps;
        pz;pn;
        //zavrsuva 1v red
//____________________________________________________
        //pocetok 1v del pred sredina
        for(i=0;i<((n-3)/2);i++)
        {
            pz;
            for(j=0;j<sd;j++) // 0 < 0 ic          **
                ps;
            pz;
            for(j=0;j<mm;j++) // 0 < 0 ic          **_
                ps;
            pz;
            for(j=0;j<sd;j++) // 0 < 0 ic          **_**
                ps;
            pz;pn;
            sd++;mm-=2;
        }
        //kraj na sredina 1v del
//____________________________________________________
        //pocetok na sredina
        pz;
        for(j=0;j<sd;j++)
            ps;
        pz;
        for(j=0;j<sd;j++) // 0 < 0 ic          **
            ps;
        pz;pn;
        //kraj na sredina
//____________________________________________________
        //pocetok na 2r del posle sredina //*
        sd--;mm+=2;
        for(i=((n-3)/2);i>0;i--)
        {
            pz;
            for(j=0;j<sd;j++) // 0 < 0 ic          **
                ps;
            pz;
            for(j=0;j<mm;j++) // 0 < 0 ic          **_
                ps;
            pz;
            for(j=0;j<sd;j++) // 0 < 0 ic          **_**
                ps;
            pz;pn;
            sd--;mm+=2;
        }
        //kraj na 2r del na sredina
//____________________________________________________
        // pocnuva posledan red
        pz;
        for(i=0;i<n-2;i++)
            ps;
        pz;
        //zavrsuva posledan red
    }

    return 0;
}
