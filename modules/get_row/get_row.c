#include <stdio.h>
#include <stdlib.h>

int *get_row(int **grid, int row) {
  int *grid_row = malloc(sizeof(int) * 9);

  for (int i = 0; i < 9; i++) {
    grid_row[i] = grid[row][i];
  }

  return grid_row;
}
