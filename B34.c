#include <stdio.h>

int main(void) {
  char a[100];
  int i,c=0;
  scanf("%90[^\t]s",a);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i] == '\n')
    {
      c = c+1;
    }
  }
  printf("%d",c+1);
  return 0;
}
