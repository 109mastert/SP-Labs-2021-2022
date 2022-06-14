#include <stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);//1 2 3
    printf("%d",++x - --y + z++ + (x>z)); // 2 -1 + 3 + 0 = 4
    printf(" %d",++x - --y + z++ + x>z); // 2 - 1 + 3 +2>3    4>3   1
    return 0;
}
