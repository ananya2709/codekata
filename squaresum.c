#include <stdio.h>

int main()
{
int a,rem,sum;
scanf("%d",&a);
sum =0;
while(a!=0)
{
    rem=a%10;
    sum=sum+(rem*rem);
    a=a/10;
}
printf("%d",sum);
}
