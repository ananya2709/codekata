#include <stdio.h>

int main()
{
    int a,rem,sum=0;
    scanf("%d",&a);
    int temp=a;
    while(a>0)
    {
        rem=a%10;
        sum=sum+(rem*rem*rem);
        a=a/10;
    }
if(temp==sum)
printf("yes");
else
printf("no");

    return 0;
}
