int includes(int *array, int length, int item) {
  for (int i = 0; i < length; i++) {
    if (array[i] == item) return 1;
  }
  return 0;
}