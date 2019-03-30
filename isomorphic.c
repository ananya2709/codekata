#include <stdio.h>
#include<string.h>
int
main ()
{
  int i, len, count = 0, count1 = 1, n[5], j = 0, k[5], l = 0;
  char a[10], b[10], s, st;
  scanf ("%s", a);
  scanf ("%s", b);
  
 
  len = strlen (a);
  for (i = 0; i < len; i++)
    {
      if (i = 0)
	{
	  strcpy (s, a[i]);
	  count = 1;
	  n[j++] = i;

	}
      else
	{
	  if (strcmp (s, a[i]) == 0)
	    {
	      count++;
	      n[j++] = i;
	    }
	  j = 0;
	  else
	  {
	    n[j++] = i;
	    strcpy (s, a[i]);
	    count = 1;
	  }
	}
    }
  for (i = 0; i < strlen (b); i++)
    {
      if (i = 0)
	{
	  strcpy (st, b[i]);
	  count1 = 1;
	  k[l++] = i;

	}
      else
	{
	  if (strcmp (st, b[i] == 0))
	      {
	      count1++; 
	      k[l++] = i;
	      }
	      l = 0;
	      else
	      {
	      k[l++] = i; strcpy (st, b[i]);
	      count1 = 1;
	          
	      }
	 }
    }
	      int correct;
	      if (count == count1)
	      {
	      for (i = 0; i < count; i++)
	      {
	      if (n[i] == k[i])
	      {
	      correct = 1;
	      
	      }
	      else
	      correct = 0;
	          
	      }
	      }
	      if (correct = 1)
	      {
	      printf ("it is isomporphic");}
	      else
	      printf ("no"); return 0;
}
}
