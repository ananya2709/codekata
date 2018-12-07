#include <stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int i=0;
    scanf("%s",a);
    while(a[i]!='\0') 
    {
        i++;
    }
     a[i]='.';
    printf("%s",a);

    return 0;
}
