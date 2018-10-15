/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int n,a,b,old;
printf("enter the no");
scanf("%d",&n);
old=n;
while(n!=0)
{
a=n%10;
b=b*10+a;
n/=10;
}
if(old==b)
{printf("yes");
}
else
{
printf("no");
}

}
