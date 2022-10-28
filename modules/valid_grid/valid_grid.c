#include "../clear_array/clear_array.h"
#include "../get_col/get_col.h"
#include "../get_row/get_row.h"
#include "../get_square/get_square.h"
#include "../includes/includes.h"

int valid_grid(int **grid) {
  int position = 0;
  int appeared[9];
  int *rows;
  int *cols;
  int *squares;

  for (int i = 0; i < 9; i++) {
    rows = get_row(grid, i);
    for (int j = 0; j < 9; j++) {
      if (rows[j] == 0) continue;
      if (includes(appeared, 9, rows[j])) return 0;
      appeared[position] = rows[j];
      position++;
    }
    clear_array(appeared, 9);
    position = 0;
  }

  for (int i = 0; i < 9; i++) {
    cols = get_col(grid, i);
    for (int j = 0; j < 9; j++) {
      if (cols[j] == 0) continue;
      if (includes(appeared, 9, cols[j])) return 0;
      appeared[position] = cols[j];
      position++;
    }
    clear_array(appeared, 9);
    position = 0;
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      squares = get_square(grid, i * 3, j * 3);
      for (int k = 0; k < 9; k++) {
        if (squares[k] == 0) continue;
        if (includes(appeared, 9, squares[k])) return 0;
        appeared[position] = squares[k];
        position++;
      }
      clear_array(appeared, 9);
      position = 0;
    }
  }
  return 1;
}