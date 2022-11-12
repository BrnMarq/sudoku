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

  system("clear");

  for (int i = 0; i < 9; i++) grid[i] = (int *)malloc(sizeof(int) * 9);

  init_grid(grid);
  generate_grid(grid, 35);

  int lives = 3;
  int **copy;
  int row;
  int col;
  int value = 0;
  char buf[1024];

  do {
    if (is_completed(grid)) break;
    copy = copy_grid(grid);
    puts("");
    puts("");
    print_grid(copy);
    get_position(&col, &row);
    if (grid[row][col] != 0) {
      system("clear");
      printf(RED "\n    Esa casilla ya está ocupada!");
      printf(WHITE "");
      continue;
    }
    while (value < 1 || value > 9) {
      printf("Ingrese un valor del 1 al 9: ");
      fgets(buf, 1024, stdin);
      value = atoi(buf);
    }
    copy[row][col] = value;
    value = 0;
    system("clear");
    if (valid_grid(copy) && is_completed(solve(copy))) {
      grid = copy;
      continue;
    }
    lives--;
    printf(RED "\n   Incorrecto. Te quedan %i vidas", lives);
    printf(WHITE "");
  } while (lives > 0);

  if (!lives) printf(RED "¡Has perdido!, inténtalo de nuevo\n");
  if (lives) printf(GREEN "¡Ganaste!, enhorabuena!\n");

  return 0;
}