#include <stdio.h>

int main(){
    
    //Descuento 23%
    //Solicitar al cliente el precio de su producto, para aplicarle un 23% de descuento mostrando en 
    //pantalla el precio del producto original, con el desvuento aplicado y cuanto fue el descuento
    
    float preciodeproducto;
    float descuentofinal;
    int porcentaje = 23;
    
    
    printf("Ingresa el preciodeproducto\n");
    scanf("%f", &preciodeproducto);
    
    descuentofinal = preciodeproducto - (preciodeproducto * porcentaje / 100);
   
    printf("El descuentofinal es de: %.2f\n", descuentofinal);





    return 0;
}
