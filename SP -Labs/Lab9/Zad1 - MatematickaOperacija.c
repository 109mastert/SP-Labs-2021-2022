#include<stdio.h>
#include<string.h>

void matematickaOperacija (int a, int b,char op, int *rez)
{
    switch(op)
    {
    case '+': *rez=a+b; break;
    case '-': *rez=a-b; break;
    case '*': *rez=a*b; break;
    case '/': *rez=a/b; break;
    case '%': *rez=a%b; break;
    }
}

int main () {

    int a,b,rezultat;

    scanf("%d %d", &a, &b);

    char * operacii = "+-*/%";

    int i=0;
    for (i=0;i<strlen(operacii);i++) {
        matematickaOperacija(a,b,operacii[i],&rezultat);
        printf("%d %c %d -> %d\n", a, operacii[i], b, rezultat);
    }

	return 0;
}
