#include<stdio.h>

float max(float *niza, int n)
{
    float max=*(niza); int i;
    for(i=1;i<n;i++)
    {
        if(*(niza+i)>max)
            max=*(niza+i);
    }
    return max;
}
float min(float *niza, int n)
{
    float min=*(niza); int i;
    for(i=1;i<n;i++)
    {
        if(*(niza+i)<min)
            min=*(niza+i);
    }
    return min;
}
void normalize(float *niza,int n)
{
    int i;
    float max1,min1;
    max1=max(niza,n);
    min1= min(niza,n);
    for(i=0;i<=n;i++)
        *(niza+i)= (*(niza+i)-min1 *1.0)/ (1.0*(max1- min1));
}
void sort(float *niza, int n)
{
    int i;
    float pom;
    for(i=0;i<n;i++)
    {
        if(*(niza+i)<*(niza+i+1))
        {
            pom=*(niza+i);
            *(niza+i)=*(niza+i+1);
            *(niza+i+1)=pom;
            i=-1;
        }
    }
}
int main () {

    float niza [200];
    int i,n;

    scanf("%d", &n);

    for (i=0;i<n;i++) {
        scanf("%f", &niza[i]);

    }
    printf("MAX -> %.3f\n", max(niza,n));
    printf("MIN -> %.3f\n", min(niza,n));
    normalize(niza,n);
    sort(niza,n);
    for (i=0;i<n;i++) {
        printf("%.3f ", *(niza+i));
    }
    return 0;

}
