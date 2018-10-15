/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, n,m;
    
    
    printf("Print odd numbers from  mto n: ");
    scanf("%d%d", &m,&n);

    printf("All odd numbers from %d to %d are: \n", m,n);

    
    for(i=m+1; i<=n; i++)
    {
    
        if(i%2!=0)
        {
            printf("%d""  ", i);
        }
    }

    return 0;
}