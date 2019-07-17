#include <stdio.h>
#include<math.h>

int main(void) {
  int n,i,c=0;
  scanf("%d",&n);
  for(i=2;i<n;i++)
  {
    if(n%i == 0)
    {
      c++;
      break;
    }
  }
  if(c==0)
  {
    printf("no");
  }
  else
  {
    printf("yes");
  }
  return 0;
}
