#include <stdio.h>

int main()
{
    int a[10],n,max,i,j,count[10]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count[i]++;
                
            }
        }
    }
    max=count[0];
        int num;
        for(i=0;i<n;i++)
        {
            if(max>count[i])
            {
                max=count[i];
                num=a[i];
                printf("%d",a[i]);
           }
        }
        
            return 0;
        
}

