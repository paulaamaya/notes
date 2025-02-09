
/* Experiments with pointers
 * Paula Amaya
 * February 8, 2025 
 */
#include <stdio.h>

void swap(float *x, float *y){
  float temp = *x;
  // Change value of b to a
  *x = *y;
  // Change value of a to temp
  *y = temp;
}

int main(void)
{
    int a = 10; 

    // Store address of a
    int *p = &a;
    // Equivalent to b = a
    int b = *p;
    // Manipulate value of a
    *p += 2;
    // Access value of a
    printf("a = %d and *p = %d\n", a, *p);  // Output: a = 12 and *p = 12
    printf("a = %d and p = %p\n", a, p);   // Output: a = 12 and p = 0x7ffc2cd84b4c
    // b has not changed
    printf("b = %d\n", b);   // Output: b = 10

    float c = 45.5, d = 101.25;
    swap(&c, &d);
    printf("c = %f and d = %f\n", c, d);
}

