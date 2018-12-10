 #include <stdio.h>
#include<string.h>
int main()
{
    char s[10],r[10],h=0;
    scanf("%s",s);
    int i,len=strlen(s);
    for(i=len-1;i>=0;i--)
    {
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
        {
        r[h]=s[i];
        
        h++;
        }
    }
printf("%s",r);
    return 0;
}
