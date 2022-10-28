#include <stdio.h>
#include <stdlib.h>

#include "../get_col/get_col.h"
#include "../get_row/get_row.h"
#include "../get_solutions/get_solutions.h"
#include "../get_square/get_square.h"
#include "../print_grid/print_grid.h"

int *get_comparison(int **grid, int col, int row) {
  int position = 0;
  int *row_s;
  int *col_s;
  int *square_s;
  int *comparison = malloc(sizeof(int) * 9);

  row_s = get_solutions(get_row(grid, row));
  col_s = get_solutions(get_col(grid, col));
  square_s = get_solutions(get_square(grid, col, row));

  for (int i = 0; i < 9; i++) {
    if (row_s[i] != 0 && row_s[i] == col_s[i] && row_s[i] == square_s[i]) {
      comparison[position] = row_s[i];
      position++;
    }
  }

  return comparison;
}
