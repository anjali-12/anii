/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100],str2[100];
    int i,j,n;
    
 
  	printf(" Enter the First String :  ");
  	gets(Str1);
  	
  	printf("Please Enter the Second String :  ");
  	gets(Str2);
  	
  	for(i = 0; Str1[i] == Str2[i] && Str1[i] == '\0'; i++);
		   
  	if(Str1[i] < Str2[i])
   	{
   		printf("%s",str1);
	}
	else if(Str1[i] == Str2[i])
   	{
   		printf("%s",str2);
	}
	else
   	{
   		printf(" ")

