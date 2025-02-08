#include <stdio.h>

int a = 1, b = 2, c = 3;
int f();

int main(void){
  printf("%3d\n", f());
  printf("%2d%2d%2d", a, b, c);

  return 0;
}

int f(){
  int b, c;

  a = b = c = 4;
  return a + b + c;
}
