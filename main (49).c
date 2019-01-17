/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
# include <stdio.h>


void main()
{
    int n,i,c=0;
    printf("enter the no");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {if(n%i==0)
    {
        c=c+1;
    }
    }
    
    if(c==2)
    {printf("no");
    }
    else
    {
        printf("yes");
    }
    
}
