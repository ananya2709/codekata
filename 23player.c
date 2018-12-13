#include <stdio.h>

int main()
{
    int n,i,k,j,a[10],b[10],max;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<k;i++)
    {
        max=a[0];
        a[n+i]=b[i];
        for(j=1;j<=n+i;j++)
        {
            if(max<a[j])
            {
                max=a[j];
                
            }
        }printf("%d\t",max);
    }
    return 0;
}
