#include <stdio.h>
#include <stdlib.h>

int *get_solutions(int *items) {
  int *solutions = (int *)malloc(sizeof(int) * 9);
  int appeared = 0;

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if ((i + 1) == items[j]) {
        appeared = 1;
      }
    }
    if (!appeared) {
      solutions[i] = i + 1;
    } else {
      solutions[i] = 0;
    }
    appeared = 0;
  }
  return solutions;
}
