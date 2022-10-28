#include <stdio.h>

#include "../../structs.h"

void init_possibles(TPossibles possibles[], int items) {
  for (int i = 0; i < items; i++) {
    possibles[i].solutions = NULL;
  }
}