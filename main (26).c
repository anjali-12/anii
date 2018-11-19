/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, n, f1 = 0, f2= 1, s;

    printf("Enter the number of terms: ");
    scanf("%d", &n);



    for (i = 1; i <= n; ++i)
    {
        printf("%d ", f1);
        s= f1 + f2;
        f1 = f2;
        f2 = s;
    }
    return 0; 
}
