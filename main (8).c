/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{
    int number, c=0, remainder, result = 0,m,n,i,temp1,temp2;
    printf("enter the intervals:");
    scanf("%d%d",&m,&n);

    
    for(int i=m+1;i<n;++i)
    {temp1 =i;
    temp2=i;
    
    while(temp1!=0)
    {
        temp1/=10;
        ++c;
    }

    while (temp2 != 0)
    {
        remainder = temp2 % 10;
            result += pow(remainder, c);
            temp2 /= 10;
    }

    if(result == i)
    {
     printf("%d",i);
    }
    c=0;
    result=0;
    }
}