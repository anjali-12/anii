/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[100];
    int i, j, size, count = 0,k;
    printf("Enter size of the array : ");
    scanf("%d", &size);
    printf("enter the element to be searched");
    scanf("%d",&k);
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<size; i++)
    {
    
            if(arr[i] == k)
            {
                count++;
                
            }
        
    }

    printf("%d", count);

    return 0;
}
