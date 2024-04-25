#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static void add_some_shit_to_x(int *x) {
  srand(time(NULL));
  int random = 1 + rand() % 9;
  *x += random;
}

int main(void) {
  int x = 0;
  add_some_shit_to_x(&x);
  printf("x: %d\n", x);
  return 0;
}
