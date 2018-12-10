#include <stdio.h>

int main()
{
    int a,n,d,i,sum=0;
    scanf("%d%d%d",&n,&a,&d);
    for(i=1;i<=n;i++)
    {
        sum=sum+(a+(i-1)*d);
    }
    printf("%d",sum);

    return 0;
}
