#include<stdio.h>
int main()
{
    int a[10],b=0,n,i,j=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
       // printf("%d",a[i]);
        if(a[i]<a[j])
        {
            //printf("hi");
            b=1;
            j++;
        }
    }
    if(b==1)
    {
        printf("yes");
    }
    else
    printf("no");
    return 0;
}
