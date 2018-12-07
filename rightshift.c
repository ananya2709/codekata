#include <stdio.h>

int main()
{
int n,k,i,a[10];
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=k-1;i<n;i++)
{
    printf("%d\t",a[i]);
}
for(i=0;i<k-1;i++)
{
    printf("%d\t",a[i]);
}
}
