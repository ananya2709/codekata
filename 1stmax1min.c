#include <stdio.h>

void main()
{
	int n,i,j,max=0,a[10],b,min=a[0];
	scanf("%d",&n);//printf("hi");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	//printf("hi");
	for(i=0;i<n/2;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]!=0&&a[j]>max)
			{
					max=a[j];
		
		
					b=j;
				//	printf("%d",b);
			
			}
		}
		printf("%d\n",max);
		a[b]=0;
		max=0;
	
	for(j=0;j<n;j++)
		{
			if(a[j]!=0&&a[j]<min)
			{
					min=a[j];
					b=j;
				//	printf("%d",b);
			
			}
		}
		printf("%d\n",min);
		a[b]=0;
		min=10;
	}
	
}
