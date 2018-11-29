#include <stdio.h>

int main()
{
    int a,b,i,prime,j;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        prime=0;
        for(j=2;j<i;j++)
        {
            if(i%j)
            {
                prime=1;
                break;
            }
        }
        if(prime==0)
        printf("%d",&i);
    }

    return 0;
}
