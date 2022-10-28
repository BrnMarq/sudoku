typedef struct {
  int row;
  int col;
  int *solutions;
} TPossibles;

int possibles_length(TPossibles possibles[], int items);
void init_possibles(TPossibles possibles[], int items);
void sort_possibles(TPossibles possibles[], int items);