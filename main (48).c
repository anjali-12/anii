/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
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
      if (ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='0'||ch[i]=='u')
	{
	  flag = 1;
	  break;
	}
    }

  if (flag)
    {
      printf ("yes");
    }
  else
    {
      printf ("no");
    }
  return 0;


}

