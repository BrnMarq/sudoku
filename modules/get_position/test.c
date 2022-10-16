#include <stdio.h>

#include "get_position.h"

int main() {
  int col;
  int row;

  get_position(&col, &row);

  printf("\nLa columna es: %d", col);
  printf("\nLa fila es: %d\n", row);

  return 0;
}
