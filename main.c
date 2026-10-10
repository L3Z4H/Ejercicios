#include <stdio.h>

int main(){
 //Piramide
 int i,j,k;
 int n =5; //numero de filas de la Piramide
 for(i= 5; i>= 1; i-- ){
 //imprimir asteriscos
 for(k =1; k<= (2 * i - 1); k++){
 printf("*");
 }
 printf("\n");

 }

return 0;
 }