/*
 * Circle and area
 * Paula Amaya
 * January 28, 2025
 */
#include <stdio.h>
#include <math.h>

int main(void)
{
  double area, radius;
  printf("Enter a radius: ");
  scanf("%lf", &radius);
  area = M_PI * radius * radius;
  printf("A circle with radius %lf has an area of %lf.\n", radius, area); 
  return 0; 
}
