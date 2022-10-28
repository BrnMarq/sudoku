#include <stdlib.h>

int *get_col(int **grid, int col) {
  int *grid_col = malloc(sizeof(int) * 9);

  for (int i = 0; i < 9; i++) {
    grid_col[i] = grid[i][col];
  }

  return grid_col;
}