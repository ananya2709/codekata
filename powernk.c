#include<stdio.h>
void main()
{
    int a,b,i,d=1;
    scanf("%d%d",&a,&b);
   
        if(a%b==0)
        {
            printf("yes");
            d=0;
           
        }
    
    if(d!=0)
    {
        printf("no");
    }
}
