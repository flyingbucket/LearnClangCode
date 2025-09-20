#include <stdio.h>
int main() {
  int a = 1, b = 0, c = 0;
  printf("%d\n", a || b && c);   // 等价于 a || (b && c)
  printf("%d\n", (a || b) && c); // 加括号改变优先级
  return 0;
}
