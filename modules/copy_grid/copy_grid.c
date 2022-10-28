#include <stdlib.h>

int **copy_grid(int **grid) {
  int **new_grid = (int **)malloc(9 * sizeof(int *));
  for (int i = 0; i < 9; i++) new_grid[i] = (int *)malloc(9 * sizeof(int));

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      new_grid[i][j] = grid[i][j];
    }
  }

  return new_grid;
}