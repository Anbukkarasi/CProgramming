#include <stdio.h>

int main(void) {
  int n,i=0,c=1,d=0,k=0;
  
  char s[100],t[100];
  gets(s);
  n = strlen(s);
  s[n+1] = '\0';
  for(i=0;s[i] != '\0' ;i++)
  {    
    for(int j=i+1;j<n;j++)
    {
       printf("%d",j);
       if(s[i] == s[j])
       {
        c = c + 1;
        d = d +1;
      }
    }
    
    //t[k] = s[i];
   // printf("%c",s[i]);
    //printf("%d",i);
   // k = k +1;
   // t[k] = c;
    //k = k +1;
    i = d;
    c = 0;
   
  }
  //t[k] = '\0';
  //puts();
  return 0;
}
