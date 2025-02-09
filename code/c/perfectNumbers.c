
/* Read in floats and print their sum
 * Paula Amaya
 * January 29, 2025
 */
#include <stdio.h>

int main(void)
{
  int range;
  printf("Please enter the upper bound for the perfect number search: ");
  scanf("%d", &range);

  for (int i = 0; i < range; i++) {
    int sum = 0;

    for (int j = 1; j < i; j++) {
      if (i % j == 0) {
        sum += j;
      }
    }

    if (sum == i) {
      printf("%d is a perfect number.\n", i);
    }
  }
}

