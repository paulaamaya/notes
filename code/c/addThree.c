/* Read in three floats and print their sum.
 * Paula Amaya
 * January 29, 2025
 */
#include <stdio.h>

int main(void)
{
  float a, b, c, sum;

  // Print question to user
  printf("Input three floats: ");
  // Read in appropiate data types  
  scanf("%f%f%f", &a, &b, &c);
  // Print procesed output
  sum = a + b + c;
  printf("Your input was a = %f, b = %f, c = %f\n", a, b, c);
  printf("Their sum is %f", sum);
  
  return 0;
}

