#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "external/colors.h"
#include "modules/copy_grid/copy_grid.h"
#include "modules/generate_grid/generate_grid.h"
#include "modules/get_comparison/get_comparison.h"
#include "modules/get_position/get_position.h"
#include "modules/get_solutions/get_solutions.h"
#include "modules/init_grid/init_grid.h"
#include "modules/is_completed/is_completed.h"
#include "modules/print_grid/print_grid.h"
#include "modules/solve/solve.h"
#include "modules/valid_grid/valid_grid.h"

int main() {
  srand(time(NULL));
  int **grid = (int **)malloc(sizeof(int *) * 9);

  for (int i = 0; i < 9; i++) grid[i] = (int *)malloc(sizeof(int) * 9);

  init_grid(grid);
  generate_grid(grid, 20);

  int lives = 3;
  int **copy;
  int row;
  int col;
  int value;
  char buf[1024];

  do {
    if (is_completed(grid)) break;
    copy = copy_grid(grid);
    puts("");
    print_grid(grid);
    get_position(&col, &row);
    printf("Ingrese un valor: ");
    fgets(buf, 1024, stdin);
    value = atoi(buf);
    copy[row][col] = value;
    if (valid_grid(copy) && is_completed(solve(copy))) {
      grid = copy;
      continue;
    }
    lives -= 1;
    printf(RED "\n   Incorrecto. Te quedan %i vidas\n", lives);
    printf(WHITE "");
  } while (lives > 0);

  if (!lives) printf(RED "¡Has perdido!, inténtalo de nuevo\n");
  if (lives) printf(GREEN "¡Ganaste!, enhorabuena!\n");

  return 0;
}