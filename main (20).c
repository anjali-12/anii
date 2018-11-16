/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char str[100];
    int i, words,k;

    /* Input string from user */
    printf("Enter any string: ");
    gets(str);

    i = 0;
    words = 1;

    /* Runs a loop till end of string */
    while(str[i] != '\0')
    {
        /* If the current character(str[i]) is white space */
        if(str[i]==' ')
        {
            words++;
        }

        i++;
    }
    
    k=words-1;

    printf("%d", k);

}

