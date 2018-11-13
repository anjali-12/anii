/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int a[100],i,n,temp;

printf("enter the size of array");
scanf("%d",&n);

for(i=0;i<n;i++)
{
scanf("%d ",&a[i]);
}
for(i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
    if(a[i]>a[j])
    {temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    }
    
    }
    
    
    
}

for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return 0;
}


