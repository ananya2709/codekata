#include<stdio.h>
void main()
{
    int a,b,i,d=1;
    scanf("%d%d",&a,&b);
    for(i=1;i<5;i++)
    {
        if(b^i==a)
        {
            printf("yes");
            d=0;
            break;
        }
    }
    if(d!=0)
    {
        printf("no");
    }
}
