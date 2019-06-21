#include <stdio.h>

int main(void) {
  //char a[100];
  int t,a,b;
  scanf("%d",&a);
  scanf("%d",&b);
  t=a;
  a=b;
  b=t;
  printf("%d\t",a);
  printf("%d",b);
  return 0;
}
