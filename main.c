/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, n, sum=0,k;

    /* Input size of the array */
    printf("Enter size of the array: ");
    scanf("%d", &n);

    /* Input elements in array */
    printf("Enter %d elements in the array: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the size");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {

        // Add each array element to sum
        sum += arr[i];
    }

    printf("Sum of all elements of array = %d", sum);

    return 0;
}
