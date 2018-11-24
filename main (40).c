/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[10],n,i,k,flag=0;
    
    printf("enter the size of array");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);
    }
    printf("enter the no to be searched");
    scanf("%d",&k);
    
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
        flag=1;
        break;
        }
        
    }
    if(flag==1)
    {printf("yes");
    }
    else
    {printf("no");
    }

}

