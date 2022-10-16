/*
  This function returns a boolean
*/

int includes(int items[], int itemsLength, int item) {
  for (int i = 0; i < itemsLength; i++) {
    if (items[i] == item) return 1;
  }
  return 0;
}