/*
  Get position tiene que encargarse de recibir dos enteros por referencia, como
  puedes ver, pedir al usuario que ingrese una posición en el sudoku con el
  formato:

    "LETRA-NÚMERO"

  Letra de la A a la I
  Número desde el 1 al 9

  Después de recibir esa información, procesarla para que sean posiciones de un
  arreglo Ejemplos: Si recibes "A-6", col debe ser 0 y row debe ser 5 Si recibes
  "H-2", col debe ser 7 y row 1 Si recibes "F-3", col debe ser 5 y row 2

  Notas:
    -Col es por columna en inglés
    -Row es por fila en inglés

  Suerte (y)
*/

void get_position(int *col, int *row) {
  *col = 1;
  *row = 3;
}