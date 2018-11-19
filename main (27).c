/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1,n2,temp;


    printf("Enter any two numbers: ");
    scanf("%d%d", &n1, &n2);

   

    temp=n1;
    n1=n2;
    n2=temp;

    printf("%d %d", n1,n2);
    

    return 0;
}

