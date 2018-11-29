#include <stdio.h>

int main()
{
    int a,b,rem,sum=0,i;
    scanf("%d%d",&a,&b);
    
    for(i=a+1;i<b;i++)
    {
        int temp=i;
    while(a>0)
    {
        rem=i%10;
        sum=sum+(rem*rem*rem);
        i=i/10;
    }
if(temp==sum)
printf("%d",i);
}

    return 0;
}
