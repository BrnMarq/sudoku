void generate_grid(int grid[9][9]) {
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      grid[i][j] = (((i % 9) + j) % 9) + 1;
    }
  }
}