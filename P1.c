#include <stdio.h>

int main(void) {
  char a[100],n;
  int i;
  gets(a);
  n = strlen(a);
  for(i=n;i>=0;i--)
  {
    printf("%c",a[i]);
  }
  return 0;
}
