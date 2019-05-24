#include <stdio.h>
#include<ctype.h>
int main()
{
	printf("hi");
	int i,brea=0,bre=0;
    char a[20];
    scanf("%s",a);
    
    for(i=0;i<20;i++)
    {
    if(isalpha(a[i]))
    {brea=1;
    break;
    }
    else(isdigit(a[i]))
    {    bre=1;
    break;
        
    }
     
    }   
    
if(brea==1&&bre==1)
{
    printf("it is a varnum");
}
    return 0;
}

