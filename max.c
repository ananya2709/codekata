#include <stdio.h>

int main()
{
    int a,n[10],i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&n[i]);
    }
    int max=n[0];
for(i=1;i<=a;i++)
{
    if(max<n[i])
    max=n[i];
}
printf("%d",max);

    return 0;
}
