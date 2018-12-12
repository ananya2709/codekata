#include <stdio.h>

int main()
{
    #include<stdio.h>
	int n,m,i,lcm=1;
	scanf("%d %d",&m,&n);
	for(i=2;i<=n;i++)
	{
	    if(m>0||n>0)
	    {
		if(n%i==0 && m%i==0)
		{
		    n=n/i;
		    m=m/i;
		    lcm=lcm*i;
			
		}
		}
	}
if(m==1||m==2||m==3||n==1||n==2||n==3)
			{
			    lcm=lcm*n;
			    lcm=lcm*n;
			}
printf("%d",lcm);
return 0;
}
