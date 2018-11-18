/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1, n2;

    /* Input two numbers from user */
    printf("Enter any two numbers: ");
    scanf("%d%d", &n1, &n2);

   
    /* Swap two numbers */
    n1 ^= n2;
    n2 ^= n1;
    n1 ^= n2;

    printf("%d\n", n1);
    printf("%d\n", n2);

    return 0;
}
