#include <stdio.h>
#include<math.h>

int main(void) {
  int n,i,c=0;
  scanf("%d",&n);
  for(i=2;i<n;i++)
  {
    if(n%i == 0)
    {
      printf("%d\t",i);
    }
  }
  
  return 0;
}
