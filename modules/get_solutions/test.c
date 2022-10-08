#include <stdio.h>

#include "get_solutions.h"

int main() {
  int test1[9] = {1, 0, 0, 2, 4, 5, 3, 0, 7};
  // int test2[9] = {1, 0, 0, 2, 4, 5, 3, 0, 7};
  // int test3[9] = {1, 0, 0, 2, 4, 5, 3, 0, 7};
  int *test1solution;

  test1solution = get_solutions(test1);

  for (int i = 0; i < 9; i++) {
    printf("%d\n", test1solution[i]);
  }

  return 0;
}