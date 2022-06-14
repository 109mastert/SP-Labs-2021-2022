    #include <stdio.h>
    #include<math.h>
    int main()
    {
        int n,a[100],i,flag,max;
        scanf("%d",&n);
        flag=0; max=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(flag == 1)
            {
                max = a[0]-a[1];
                flag++;
            }
            if(flag>1)
            {
                if((abs(a[i]-a[i-1]))>max)
                    max=abs(a[i]-a[i-1]);
            }
            if(flag== n)
            {
                if((abs(a[n-1]-a[0]))>max)
                    max=a[n-1]-a[0];
            }
            flag++;
        }
       // if((abs(a[n-1]-a[0]))>max)
          //      max=a[n-1]-a[0];
        printf("Najgolema razlika: %d",abs(max));
        return 0;
    }
    /*
    //kako da se mrda levo desno
    for(i=0;i<n;i++)
    {
        for(j=0;j<)
    }
    */










