/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
 

int power(int number)
{
    while(number!=1)
    {
        if(number%2!=0)
            return 0;
        number=number/2;
    }
    return 1;
}
 
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
 
    if(power(num))
        printf("yes");
    else
        printf("no");
     
    return 0;
}
