#include <stdio.h>
#include <stdlib.h>

void Unreachable(void){
  printf("You've been pwned\n");
  exit(0);
}

int main(void){
  printf("Hello friend\n");
  return 0;
}
