#include "../../structs.h"
#include "../length/length.h"

void sort_possibles(TPossibles possibles[], int items) {
  TPossibles swap;
  int first_length;
  int second_length;
  for (int i = 0; i < items; i++) {
    for (int j = i + 1; j < items; j++) {
      first_length = length(possibles[i].solutions);
      second_length = length(possibles[j].solutions);
      if (first_length > second_length) {
        swap = possibles[i];
        possibles[i] = possibles[j];
        possibles[j] = swap;
      }
    }
  }
}