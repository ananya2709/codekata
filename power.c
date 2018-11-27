#include <stdio.h>

int main()
{
    int a,b,pow=1,i;
    scanf("%d%d",&a,&b);
    for(i=0;i<b;i++)
    {
        pow=pow*a;
    }
    printf("%d",pow);
    return 0;
}
