 #include <stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[n],r[10],h=0;
    scanf("%s",s);
    int i,len=strlen(s);
    for(i=len-1;i>=0;i--)
    {
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
        {
        r[h]=s[i];
         printf("%c",r[h]);
        h++;
        }
    }

    return 0;
}
