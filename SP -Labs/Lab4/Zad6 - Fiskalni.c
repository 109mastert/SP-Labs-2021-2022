#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,s,m,j,suma,sr,max1;
    float ddv,total[100],max;
    char str[100];
    scanf("%d",&m);
    sr=1;
    for(i=0;i<m;i++)
    {
        scanf("%d",&n);
        total[i] =0.0;
        suma=0;
            for(j=0;j<n;j++)
        {
            scanf("%d",&s);
            scanf("%s",&str);
            // enough to make a grown man cry
            if(strcmp(str,"A")==0)
            {
                ddv=s*0.18;
                total[i]+=ddv;
            }
            if(strcmp(str,"B")==0)
            {
                ddv=s*0.05;
                total[i]+=ddv;
            }
            suma+=s;
           // printf("Total tax return is: %f\n",total);

        }
        if(sr==1)
        {
           max=total[0];
           sr++;
        }
        if(suma<=30000)
        {
            total[i] = total[i]/100 *15;
            printf("Total tax return is: %.2f\n",total[i]);//round(total[i])*100.0)/100.0);
            if(sr!=1)
            {
                if(total[i]>total[i-1])
                    max=total[i];
                    max1 = suma;
            }
        }
        else
            printf("Sum %d is bigger than 30000\n",suma);
    }
    printf("Max amount of reciept: %d. Max tax return for reciepts: %.2f",max1,max);

}
