#include <stdio.h>
#include <stdlib.h>

int sumOfDigits(int x)
{
    if(x>10)
        return sumOfDigits(x/10)+x%10;
    else
        return x%10;
}

int main()
{
    int n, i,sum = 0;;
    scanf("%d", &n);
    for(i = 0; i < n; ++i){
        int current;
        scanf("%d", &current);
        sum += sumOfDigits(current);
        printf("%d\n", sumOfDigits(current));
    }
    printf("%d", sum);
    return 0;
}
