void init_grid(int **grid) {
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      grid[i][j] = 0;
    }
  }
}