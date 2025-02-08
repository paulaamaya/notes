
/* Fundamental Types Sizes
 * Paula Amaya
 * February 7, 2025
 */
#include <stdio.h>

int main(void)
{
  printf("Type Sizes on My System\n");
  printf("char: %lu bytes.\n", sizeof(char));
  printf("short int: %lu bytes.\n", sizeof(short int));
  printf("int: %lu bytes.\n", sizeof(int));
  printf("long int: %lu bytes.\n", sizeof(long int));
  printf("float: %lu bytes.\n", sizeof(float));
  printf("double: %lu bytes.\n", sizeof(double));
  printf("long double: %lu bytes.\n", sizeof(long double));

  return 0;
}

