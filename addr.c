#include "stdio.h"

int main() {
  int value;
  int value_1;

  int *p;
  int *q;
  p = &value;
  q = &value_1;
  printf("The addr of value is p:%llx\n", (unsigned long long)p);
  printf("The addr of value_1 is q:%llx\n", (unsigned long long)q);
  return 0;
}
