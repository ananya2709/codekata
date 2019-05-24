#include<stdio.h>
int main()
{
    int n,k,a[10],sum=0,i;
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    if(sum==k)
    {
        printf("yes");
    }
    else
    printf("no");
    return 0;
}
