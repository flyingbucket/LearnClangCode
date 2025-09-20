#include <stdio.h>
int x = 10;
void func1() {
  int x = 20;
  printf("x in func1:%d\n", x);
}
int main() {
  printf("Before func1 x:%d\n", x);
  func1();
  printf("After func1 x:%d\n", x);
  for (int i = 1; i <= 5; i++) {
    int x = 30;
    x += 1;
    printf("x in for block:%d\n", x);
  }
  printf("After for block x:%d\n", x);
  return 0;
}
