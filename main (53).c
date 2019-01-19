/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
# include <stdio.h>
# include <math.h> 
void main() 
{ 
 int m, n1,n2,product ; 
 float p ; 
 
 printf("Enter two number : ") ; 
 scanf("%d%d", &n1,&n2) ;
 product=n1*n2;
 p = sqrt(product) ; 
 m = p ; 
 if (p == m) 
  printf("yes") ; 
 else 
  printf("no") ; 
  
} 
