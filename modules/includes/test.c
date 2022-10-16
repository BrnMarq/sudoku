#include <stdio.h>

#include "includes.h"

int main() {
  int testArr[9] = {1, 2, 3, 4, 5, 0, 0, 0, 0};

  printf("%d\n", includes(testArr, 9, 7));

  return 0;
}