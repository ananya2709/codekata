#include <stdio.h>


int main()
{
    int a,b[10],k,sum=0,i;
    scanf("%d%d",&a,&k);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<k;i++)
    {
        sum=sum+b[i];
    }
    printf("%d",sum);
    return 0;
}
   
