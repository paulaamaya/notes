/*
 * Converts marathon distance from MIs to KMs.
 * Paula Amaya
 * January 29, 2025
 */
#include <stdio.h>
#define RATIO 1.609344

int main(void)
{
  double miles, kms;
  printf("Enter the marathon distance in miles: ");
  scanf("%lf", &miles);
  kms = miles * RATIO;
  printf("The marathon distance is %lf kilometers.\n", kms);
  return 0;
}
