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
			if(m==1)
			lcm=lcm*n;
			if(n==1)
			lcm=lcm*m;
		}
		}
	}

printf("%d",lcm);
return 0;
}
