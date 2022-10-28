int is_completed(int **grid) {
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if (grid[i][j] == 0) {
        return 0;
      }
    }
  }
  return 1;
}