#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    char a[20];
    scanf("%s",a);
    scanf("%d",&n);
    //printf("hi");
    for(i=strlen(a)-n;i<strlen(a);i++)
    {
        //printf("hoi");
        printf("%c",a[i]);
        
    }
    for(i=0;i<strlen(a)-n;i++)
    {
        printf("%c",a[i]);
    }
}
