#include <stdio.h>
#include<string.h>
int main()
{
    char string[10],c;
    int i;
    gets(string);
    for(i=1;i<=strlen(string);i++)
    {
       
        if(i%2==0)
        {
            c = string[i-1] ; 
          
			string[i-1] = string[i-2]; 
		
			string[i-2] = c;
	
        }
    }
    puts(string);
    return 0;
}
