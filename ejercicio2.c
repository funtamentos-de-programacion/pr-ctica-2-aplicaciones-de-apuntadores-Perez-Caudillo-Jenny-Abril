#include <stdio.h>
/*
 Este programa crea un apuntador de tipo entero
 que apunta al inicio de un arreglo.
*/
int main () {
  short arr[5] ={1,2, 3, 4, 5}, *apArr;
  apArr = &arr[0]; //apArr = arr; (probar)
  // imprime la dirección de memoria del arreglo en la posición [0]
  printf("Dirección del arreglo en la primera posición: %x\n",&arr[0]);
  // imprime la dirección de memoria del arreglo  (el nombre del arreglo es un apuntador)
  printf("Dirección del arreglo: %x\n",&arr);
  printf("Dirección del arreglo: %x\n", arr);
  // imprime la dirección de memoria almacenada en el apuntador apArr
  printf("Dirección almacenada en el apuntador: %x\n",apArr);


  printf("*apArr = %i\n",*apArr);
  // suma una localidad al inicio del arreglo e imprime su valor
  printf("*(apArr+1) = %i\n",*(apArr+1));
  printf("*(apArr+2) = %i\n",*(apArr+2));
  printf("*(apArr+1) = %i\n",*(apArr+4));
  printf("*(apArr+2) = %i\n",*(apArr+5));
  //Imprimier el elemento 4 y 5
 // Escribe una línea de código para mostrar el valor apuntado por apArr
  printf("*(apArr) = %i\n",*(apArr));
  printf("Recorriendo el arreglo usando un apuntador:\n");
  for (int i = 0; i < 5; i++) {
    printf("Elemento %d: %d\n", i, *(apArr + i));
  }

  //Modifica apArr para que apunte al cuarto elemento
  apArr = &arr[3]; 
  //Accede al elemento con indice -2 usando el apuntador
  printf("Elemento -2: %d\n", apArr[-2]);
  //Ajusta el ciclo for para que se pueda recorrer completo el arreglo de acuerdo al elemento apuntado
  for (int i = -3; i < 2; i++) {
    printf("Elemento %d: %d\n", i, *(apArr + i));
  }
  
// Imprimir el primer y segundo elemnoyo del arreglo original
  printf("Elemento 1: %d\n", arr[0]);
  printf("Ultimo elemento: %d\n", arr[4]);

  

  return 0;

}
