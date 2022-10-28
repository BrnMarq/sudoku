#include "../../structs.h"
#include "../copy_grid/copy_grid.h"
#include "../get_comparison/get_comparison.h"
#include "../is_completed/is_completed.h"
#include "../length/length.h"

int **solve(int **grid) {
  int **new_grid;
  TPossibles possibles[81];
  int position = 0;
  int first_length;
  new_grid = copy_grid(grid);

  init_possibles(possibles, 81);

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if (grid[i][j] != 0) continue;
      possibles[position].row = i;
      possibles[position].col = j;
      possibles[position].solutions = get_comparison(grid, j, i);
      position++;
    }
  }
  int poss_length = possibles_length(possibles, 81);
  if (poss_length == 0) return new_grid;

  sort_possibles(possibles, poss_length);

  first_length = length(possibles[0].solutions);
  if (first_length == 0) return new_grid;
  for (int i = 0; i < first_length; i++) {
    if (possibles[0].solutions[i] == 0) continue;
    new_grid[possibles[0].row][possibles[0].col] = possibles[0].solutions[i];
    new_grid = solve(new_grid);
    if (is_completed(new_grid)) return new_grid;
  }

  return grid;
}