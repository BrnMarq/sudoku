#include <stdio.h>
#include <string.h>

void print_grid(int **grid) {
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
      if (grid[row][col] == 0) {
        printf("   ");
        continue;
      };
      printf(" %d ", grid[row][col]);
    }
    printf("| \n");
  }
  printf("  -------------------------------\n");
}
