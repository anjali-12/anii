/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i;
    int a[]={1,2,3,4,5,6,7,8,9,10};
    printf("enter the value");
    scanf("%d",&n);
    if(a[0]<=n && n<=a[9])
    {
    printf("yes");
    }
    else
    {
    printf("no");
    }
    
}
