/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int n;
    int r,sum=0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
        
        r=n%10;
       
        sum=sum+r;
         n =n/10;
    }

    printf("%d", sum);
}
