#include <ctype.h>
#include <stdio.h>
#include <string.h>

void get_position(int *col, int *row) {
  *col = 1;
  *row = 3;

  int verification = 0;
  int ver_col = 0;
  int ver_row = 0;

  int col_type;
  int row_type;

  int col_length;
  int row_length;

  char col_buff[256];
  char row_buff[256];

  do {
    do {
      printf("Ingrese la columna (A-I): ");
      fgets(col_buff, 30, stdin);

      col_length = strlen(col_buff);
      col_type = isalpha(col_buff[0]);

      if (col_length > 2) {
        printf("Ingrese sólo una letra o no use espacios\n");
      } else if (col_type == 0) {
        printf("Dato incorrecto. Ingrese una letra\n");
      } else {
        ver_col = 1;
      }

      if (ver_col == 1) {
        int aux = tolower(col_buff[0]);
        *col = (int)aux;

        if (*col <= 96 || *col >= 106) {
          printf("Letra inválida\n");
          ver_col = 0;
        }
      }
    } while (ver_col != 1);

    do {
      printf("Ingrese la fila (1-9): ");
      fgets(row_buff, 30, stdin);

      row_length = strlen(row_buff);

      for (int i = 0; i < row_length; i++) {  // eliminar ceros a la izquierda
        if (row_buff[0] != '0') {
          break;
        } else if (row_buff[i] == '0') {
          for (int j = i; j < row_length; j++) {
            row_buff[j] = row_buff[j + 1];
          }
          row_length--;
          i--;
        }
      }

      row_type = isdigit(row_buff[0]);

      if (row_type == 0) {
        printf("Ingrese sólo números\n");
      } else if (row_length >= 3) {
        printf("Número fuera de rango\n");
      } else {
        ver_row = 1;
      }

      if (ver_row == 1) {
        *row = (int)row_buff[0] - 48;
        if (*row <= 0 || *row >= 10) {
          printf("Número fuera de rango\n");
          ver_row = 0;
        }
      }
    } while (ver_row != 1);

    verification = 1;

  } while (verification != 1);

  *col -= 97;
  *row -= 1;
}
