#include <stdio.h>

int main()
{
    int m,h,m1;
    scanf("%d",&m);
    if(m<60)
    {
        h=0;
        printf("%d %d",h,m);
    }
    else if(m==60)
    {  
        h=1;
        m1=0;
        printf("%d %d",h,m1);
    }
    else
    {
        h=m/60;
        m1=m%60;
        printf("%d %d",h,m1);
    }
    return 0;
}
