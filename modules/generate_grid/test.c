#include <stdio.h>

#include "generate_grid.h"

void print_grid(int grid[9][9]);

int main() {
  int grid[9][9] = {{1, 2, 3, 4, 5, 6, 7, 8, 9}, {1, 2, 3, 4, 5, 6, 7, 8, 9},
                    {1, 2, 3, 4, 5, 6, 7, 8, 9}, {1, 2, 3, 4, 5, 6, 7, 8, 9},
                    {1, 2, 3, 4, 5, 6, 7, 8, 9}, {1, 2, 3, 4, 5, 6, 7, 8, 9},
                    {1, 2, 3, 4, 5, 6, 7, 8, 9}, {1, 2, 3, 4, 5, 6, 7, 8, 9},
                    {1, 2, 3, 4, 5, 6, 7, 8, 9}};

  generate_grid(grid);
  print_grid(grid);

  return 0;
}

void print_grid(int grid[9][9]) {
  printf("  ");
  for (int i = 0; i < 9; i++) {
    if (i % 3 == 0) printf("|");
    printf(" %c ", 65 + i);
  }
  puts("|");
  for (int row = 0; row < 9; row++) {
    if (row % 3 == 0) printf("  -------------------------------\n");
    printf("%d ", row + 1);
    for (int col = 0; col < 9; col++) {
      if (col % 3 == 0) printf("|");
      printf(" %d ", grid[row][col]);
    }
    printf("| \n");
  }
  printf("  -------------------------------\n");
}
