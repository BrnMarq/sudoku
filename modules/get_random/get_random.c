#include <stdlib.h>

int get_random(int min, int max) {
  int ret_val = (rand() % (max - min)) + min;
  return ret_val;
}