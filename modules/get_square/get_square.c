#include <stdio.h>
#include <stdlib.h>

int *get_square(int **grid, int col, int row) {
  int *square = (int *)malloc(sizeof(int) * 9);
  int position = 0;
  int square_col = (col / 3) * 3;
  int square_row = (row / 3) * 3;
  int numbers_per_col = 3;
  int numbers_per_row = 3;

  for (int i = square_row; i < (square_row + numbers_per_row); i++) {
    for (int j = square_col; j < (square_col + numbers_per_col); j++) {
      square[position] = grid[i][j];
      position++;
    }
  }

  return square;
}