#include "modules/get_solutions/get_solutions.h"
#include "modules/print_grid/print_grid.h"

int main() {
  int grid[9][9] = {{1, 2, 3, 4, 5, 6, 7, 8, 9}, {1, 2, 3, 4, 5, 6, 7, 8, 9},
                    {1, 2, 3, 4, 5, 6, 7, 8, 9}, {1, 2, 3, 4, 5, 6, 7, 8, 9},
                    {1, 2, 3, 4, 5, 6, 7, 8, 9}, {1, 2, 3, 4, 5, 6, 7, 8, 9},
                    {1, 2, 3, 4, 5, 6, 7, 8, 9}, {1, 2, 3, 4, 5, 6, 7, 8, 9},
                    {1, 2, 3, 4, 5, 6, 7, 8, 9}};

  print_grid(grid);
  return 0;
}