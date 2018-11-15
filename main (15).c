/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>

void main()
{
char s[30];
int i,flag=0,n=0;
printf("enter the string:");
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='0'&&s[i]=='1'&&s[i]=='2'&&s[i]=='3'&&s[i]=='5'&&s[i]=='6'&&s[i]=='7'&&s[i]=='8'&&s[i]=='9')
{
flag=flag+1;
}
}
if(flag==0)
printf("no");
else
printf("yes");


   
}