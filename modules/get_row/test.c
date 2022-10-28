#include <stdio.h>

#include "get_row.h"

int main() {
  int grid[9][9] = {{1, 2, 3, 4, 5, 6, 7, 8, 9}, {1, 2, 3, 4, 5, 6, 7, 8, 9},
                    {1, 2, 3, 4, 5, 6, 7, 8, 9}, {1, 2, 3, 4, 5, 6, 7, 8, 9},
                    {1, 2, 3, 4, 5, 6, 7, 8, 9}, {1, 2, 3, 4, 5, 6, 7, 8, 9},
                    {1, 2, 3, 4, 5, 6, 7, 8, 9}, {1, 2, 3, 4, 5, 6, 7, 8, 9},
                    {1, 2, 3, 4, 5, 6, 7, 8, 9}};
  int row = 2;
  int *gridRow;

  gridRow = get_row(grid, row);

  for (int i = 0; i < 9; i++) {
    printf("%d\n", gridRow[i]);
  }

  return 0;
}