/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[10],i,max=a[0];
    printf("enter the numbers");
    for(i=0;i<10;i++)
    {scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
    if(max<a[i])
    {max=a[i];
    }
    }
    
    
    printf("%d",max);
    
    
    
}
