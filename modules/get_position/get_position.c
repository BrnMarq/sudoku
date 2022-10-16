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

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void get_position(int *col, int *row) {
  *col = 1;
  *row = 3;
  
  int verificacion = 0;
  int ver_col = 0;
  int ver_row = 0;
  
  int tipo_col;
  int tipo_row;
  
  int largo_col;
  int largo_row;
  
  char columna[256];
  char fila[256];
  
  do{
  	do{
  		printf("Ingrese la columna (A-I): ");
  		fgets(columna,30,stdin);
  		
  		largo_col= strlen(columna);
  		tipo_col = isalpha(columna[0]);
  		
  		if(largo_col>2){
  			printf("Ingrese sólo una letra o no use espacios\n");
  		}
  		else if(tipo_col == 0){
  			printf("Dato incorrecto. Ingrese una letra\n");
  		}else{
  			ver_col=1;
  		}
  		
  		if(ver_col==1){
  			int aux= tolower(columna[0]);
  			*col = (int)aux;
  		
  			if(*col<=96 || *col>= 106){
  				printf("Letra inválida\n");
  				ver_col = 0;
  		}
  		} 	
  	}while(ver_col!=1);
  	

  	do{
  		printf("Ingrese la fila (1-9): ");
  		fgets(fila,30,stdin);
  		
  		largo_row= strlen(fila);
  		
  		for(int i=0; i<largo_row;i++){   //eliminar ceros a la izquierda
  			if(fila[0]!='0'){
  				break;
  			}
  			else if(fila[i]=='0'){
  				for(int j=i; j<largo_row;j++){
  					fila[j]=fila[j+1];
  				}
  				largo_row--;
  				i--;
  			}
  		}
  		
  		tipo_row = isdigit(fila[0]);
  		
  		if(tipo_row==0){
  			printf("Ingrese sólo números\n");
  		}
  		else if(largo_row>=3){
  			printf("Número fuera de rango\n");
  		} 		
  		else{
  			ver_row=1;
  		}
  		
  		if(ver_row==1){
  			*row = (int)fila[0]-48;
  			if(*row<= 0 || *row>=10){
  				printf("Número fuera de rango\n");
  				ver_row = 0;
  		}
  		
  	}}while(ver_row!=1);
  	  	
  		verificacion=1;
  	
  	
  }while(verificacion!=1);
  
  *col -=  97;
  *row -= 1;  
    
}










