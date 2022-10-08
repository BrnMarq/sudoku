#include <stdio.h>

#include "get_position.h"

int main() {
  int col;
  int row;

  get_position(&col, &row);

  printf("La columna es: %d", col);
  printf("La fila es: %d", row);

  return 0;
}