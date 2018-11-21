/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void swap(int p,int q) {
   int t;
   
   t=p; 
   p=q; 
   q=t;
}

void sort(int a[],int n) { 
   int i,j,temp;

   for(i = 0;i < n-1;i++) {
      for(j = 0;j < n-i-1;j++) {
         if(a[j] > a[j+1])
            swap(a[j],a[j+1]);
      }
   }
}

int main() {
   int a[100];
   int n;
   int sum,i;
   printf("enter the size");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);

   sort(a,n);
   
   n = (n+1) / 2 - 1;      // -1 as array indexing in C starts from 0

   printf("%d ", a[n]);
   
   return 0;
}