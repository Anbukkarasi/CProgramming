#include <stdio.h>
#include<math.h>

int main(void) {
  char s[100],n,i;
  gets(s);
  n = strlen(s);
  i=n/2;
  if(n%2==0)
  {
    s[i] = '*';
    s[i+1] = '*';
  }
  else{
    s[i] = '*';
  }
  puts(s);
  
  return 0;
}
