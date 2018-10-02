#include <stdio.h>
#include<math.h>
 
int main()
{
  int n, i, value;
  float sum=0;
 
  printf("Enter the value of n \n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (i = 1; i <= n; i++)
  {
    scanf("%d", &value);
    sum = sum + sqrt(value);
  }
 
  printf("Sum of the square roots of integers = %f\n", sum);
 
  return 0;
}
