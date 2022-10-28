#include <stdio.h>

#include "../../structs.h"

int possibles_length(TPossibles possibles[], int possibles_length) {
  int length = 0;
  for (int i = 0; i < possibles_length; i++) {
    if (possibles[i].solutions != NULL) length++;
  }
  return length;
}