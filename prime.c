#include <stdio.h>

int main()
{
    int  a,prime=0,i;
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {   
            prime=1;
            printf("no");
            break;
        }
    }
    if(prime==0)
    printf("yes");
    

    return 0;
}
