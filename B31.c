#include <stdio.h>

int main(void) {
  char a[100];
  int i,c=0;
  gets(a);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i] != ' ')
    {
      c = c +1;
    }
  }
  printf("%d",c);
  return 0;
}
