#include <stdio.h>

int main()
{
 int a,rev=0,rem,temp;
 scanf("%d",&a);
 temp=a;
 while(a>0)
 {
     rem=a%10;
     rev=(rev*10)+rem;
     a=a/10;
 }
 if(temp==rev)
  printf("yes");
  else
  printf("not");
}

