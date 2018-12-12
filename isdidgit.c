#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[10];
    int len,i,b;
    b=0;
    len=strlen(a);
    scanf("%s",a);
    for(i=0;i<len;i++)
    {
        if(isdigit(a[i]))
        {
            b=1;
        }
    }
    if(b==1)
    printf("yes");
    else
    printf("no");

    return 0;
}
