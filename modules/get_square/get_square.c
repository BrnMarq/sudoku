#include <stdio.h>

int *get_square(int grid[9][9], int col, int row) {
  static int square[9];
  int position = 0;
  int squareCol = (col / 3) * 3;
  int squareRow = (row / 3) * 3;
  int numbersPerCol = 3;
  int numbersPerRow = 3;

  for (int i = squareRow; i < (squareRow + numbersPerRow); i++) {
    for (int j = squareCol; j < (squareCol + numbersPerCol); j++) {
      square[position] = grid[i][j];
      position++;
    }
  }

  return square;
}