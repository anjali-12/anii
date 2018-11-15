/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

int main()
{
    int s1,s2,h1,h2,m1,m2;
    printf("enter the values in min and hours");
    scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
    s1=abs(h1-h2);
    s2=abs(m1-m2);
    printf("%d %d",s1,s2);
}
