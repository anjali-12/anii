/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compizle, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
   int i, num, p = 0;
   printf("Please enter a number: \n");
   scanf("%d", &num);
   for(i=1; i<=num; i++)
   {
      if(num%i==0)
      {
         p++;
      }
   }
   if(p==2)
   {
      printf("yes");
   } else
   {printf("no");
   }
}

