/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    char s[100];
    int flag=0,i;
    printf("enter the words");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
    if(('0'<=s[i]<='9')&&((('a'<=s[i]<='z')||('A'<=s[i]<='Z'))))
    {flag=1;
    }
    else{
        flag=0;
    }
    }
    
    if(flag=1)
    {printf("yes");
    }
    else
    {printf("no");
    }
    

    
    

    
}


