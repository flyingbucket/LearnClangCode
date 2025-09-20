#include <stdio.h>
void func1(int x) {
  int i = 0;
  while (i < 10) {
    x *= 2;
    i++;
  }
  printf("x:%d\n", x);
}
void func2(int x) {
  int i = 0;
  while (i < 10) {
    int x = x * 2;
    i++;
  }
  printf("x:%d\n", x);
}

int main() {
  int a = 2;
  printf("Original a:%d\n", a);

  func1(a);
  printf("After func1 a:%d\n", a);

  a = 2;
  printf("Redefine a to %d\n", a);
  func2(a);
  printf("After func2 a:%d\n", a);
  return 0;
}
