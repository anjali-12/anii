/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int
main ()
{
  char ch[100], i, len, flag = 0;
  printf ("enter the string");
  scanf ("%s", ch);
  len = strlen (ch);
  for (i = 0; i < len; i++)
    {
      if (ch[i] != ch[len - i - 1])
	{
	  flag = 1;
	  break;
	}
    }

  if (flag)
    {
      printf ("no");
    }
  else
    {
      printf ("yes");
    }
  return 0;


}

