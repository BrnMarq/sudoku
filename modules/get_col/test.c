#include <stdio.h>

#include "get_col.h"

int main() {
  int grid[9][9] = {{1, 2, 3, 4, 5, 6, 7, 8, 9}, {1, 2, 3, 4, 5, 6, 7, 8, 9},
                    {1, 2, 3, 4, 5, 6, 7, 8, 9}, {1, 2, 3, 4, 5, 6, 7, 8, 9},
                    {1, 2, 3, 4, 5, 6, 7, 8, 9}, {1, 2, 3, 4, 5, 6, 7, 8, 9},
                    {1, 2, 3, 4, 5, 6, 7, 8, 9}, {1, 2, 3, 4, 5, 6, 7, 8, 9},
                    {1, 2, 3, 4, 5, 6, 7, 8, 9}};
  int col = 2;
  int *gridCol;

  gridCol = get_col(grid, col);

  for (int i = 0; i < 9; i++) {
    printf("%d\n", gridCol[i]);
  }

  return 0;
}