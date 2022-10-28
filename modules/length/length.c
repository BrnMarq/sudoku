int length(int *array) {
  int array_length = 0;

  for (int i = 0; i < 9; i++) {
    if (array[i] != 0) array_length++;
  }

  return array_length;
}