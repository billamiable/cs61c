#include <stdio.h>

int main(){
  int total = 81;
  int i;
  for (i = 0; i < total / 16 * 16; i += 16)
  {
    printf("%d\n", i);
  }

  for (i = total / 16 * 16; i < total / 4 * 4; i += 4)
  {
    printf("%d\n", i);
  }
  
  for (i = total / 4 * 4; i < total; i++)
  {
    printf("%d\n", i);
  }
  
  
}