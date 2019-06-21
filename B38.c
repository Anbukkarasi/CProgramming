#include <stdio.h>

int main(void) {
  //char a[100];
  int t,a,b;
  scanf("%d",&a);
  scanf("%d",&b);
  a ^= b;
    b ^= a;
    a ^= b;
  printf("%d\t",a);
  printf("%d",b);
  return 0;
}
