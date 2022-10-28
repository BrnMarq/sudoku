#include "../copy_grid/copy_grid.h"
#include "../get_comparison/get_comparison.h"
#include "../get_random/get_random.h"
#include "../init_grid/init_grid.h"
#include "../is_completed/is_completed.h"
#include "../length/length.h"
#include "../solve/solve.h"
#include "../valid_grid/valid_grid.h"

void generate_grid(int **grid, int amount_to_fill) {
  int col;
  int row;
  int value;
  int *possibles;
  // int **new_grid;
  int possibles_length;

  while (1) {
    for (int i = 0; i < amount_to_fill; i++) {
      // new_grid = copy_grid(grid);
      col = get_random(0, 9);
      row = get_random(0, 9);
      if (grid[row][col] != 0) {
        i--;
        continue;
      }

      possibles = get_comparison(grid, col, row);
      possibles_length = length(possibles);
      if (possibles_length == 0) continue;
      value = possibles[get_random(0, possibles_length)];
      grid[row][col] = value;
    }
    if (is_completed(solve(grid))) break;
  }
}