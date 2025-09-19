/*
创建一个外部变量X
编写函数absfunc， 功能是返回绝对值
编写函数func1, 修改X值
调用absfunc，将修改后的X取绝对值，并重新赋值给X
*/
#include <stdio.h>
double absfunc(double x) {
  if (x >= 0) {
    return x;
  } else {
    return -x;
  }
}

double func1(double x) {
  // multiply x by 3
  return 3 * x;
}

int main() {

  double x = -100;
  printf("Initial x:%lf\n", x);

  x = func1(x);
  printf("x applied with func1 :%lf\n", x);

  x = absfunc(x);
  printf("x applied with absfunc :%lf\n", x);

  return 0;
}
