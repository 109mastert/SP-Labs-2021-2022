#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,s;
    float ddv,total;
    char str[100];
    scanf("%d",&n);
    total = 0.0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&s);
        scanf("%s",&str);
        // enough to make a grown man cry
        if(strcmp(str,"A")==0)
        {
            ddv=s*0.18;
            total+=ddv;
        }
        if(strcmp(str,"B")==0)
        {
            ddv=s*0.05;
            total+=ddv;
        }
       // printf("Total tax return is: %f\n",total);

    }
    total = total/100 *15;
    printf("Total tax return is: %.2f",total);
}
