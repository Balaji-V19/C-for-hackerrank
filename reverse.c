#include <stdio.h> 
#include <string.h>

void FirstReverse(char str[]) { 
    int i,k=0;
    char ans[200];
    for(i=strlen(str)-1;i>=0;i--)
    {
        ans[k++]=str[i];
    }
  
  ans[k]='\0';
  // code goes here  
  printf("%s", ans); 
            
}

int main(void) { 
  
  // keep this function call here
  FirstReverse(gets(stdin));
  return 0;
    
}
