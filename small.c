#include<stdio.h>
 int main() 
{
   int a[30], i, n, smallest;
    printf("\nEnter no of elements : \t");
   scanf("%d", &n);
    printf("Enter the elements \n");
    for (i = 0; i < n; i++)
      scanf("%d", &a[i]);
     smallest = a[0];
 
   for (i = 0; i < n; i++) 
   {
      if (a[i] < smallest) 
      {
         smallest = a[i];
      }
   }
   printf("\nSmallest Element : %d", smallest);
 
   return (0);
}
