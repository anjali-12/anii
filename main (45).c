/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,s=0;
    printf("enter the no");
    scanf("%d",&n);
    for(int i=0;i<10;i++)
    {
        s=n+i;
        if((s)%10==0)
        {
            break;
        }
        
    }
    printf("%d",s);

    return 0;
}
