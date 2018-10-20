#include<stdio.h>
#include<math.h>
int
main ()
{
  
int a, d, n, i, tn;
  
int sum = 0;
  
printf (" ");
  
scanf ("%d", &n);
  
printf (" ");
  
scanf ("%d", &a);
  
printf (" ");
  
scanf ("%d", &d);
  
sum = (n * (2 * a + (n - 1) * d)) / 2;
  
tn = a + (n - 1) * d;
  
printf (" ");
  
for (i = a; i <= tn; i = i + d)
    {
      
if (i != tn)
	
printf ("%d + ", i);
      else
	
printf ("%d = %d ", i, sum);
    
}
  
return 0;

}
