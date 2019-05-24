#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    gets(a);
    gets(b);
    int i,j=0,length=0;
    for(i=0;i<strlen(a);i++)
    {
       char g,h;
       g=a[i];
       h=b[j];
       int res=strcmp(g,h);
        if(res=0)
        {
            j++;
            length++;
        }
    }
    if(length==strlen(b));
    
        printf("yes");
        
    
    else
    printf("no");
}
