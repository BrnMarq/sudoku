#include <stdio.h>

/*
  Get solutions debe recibir un arreglo de 9 elementos, con 9 nueve enteros, y
  determinar los enteros que faltan en dicho arreglo, los 0 cuentan como
  espacios vacíos, sólo deberá determinar los distintos de cero que falten en el
  arreglo.

  Ejemplos:
    Si se pasa [ 1, 2, 0, 5, 9, 6, 0, 0, 4 ]
    Se devuelve [ 3, 7, 8, 0, 0, 0, 0, 0, 0]
    (No importa si el array que devuelves está desordenado)

  Suerte (y)
*/

int *get_solutions(int items[]) {
  static int solutions[9] = {1, 1, 1, 1, 1, 1, 1, 1, 1};

  return solutions;
}