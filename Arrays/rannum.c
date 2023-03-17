#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));

  int randomNumber=rand()%20+1;
  printf("%d",randomNumber);
}