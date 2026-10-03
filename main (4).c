#include <stdio.h>

int main(){
    
    int porcentaje= 15;
    float preciodevideojuego;
    int unidadescompradas = 2;
    float iva = 1.16;
    float descuentosiniva;
    float descuentoconiva;
    float preciototal;
    
    printf("Indique el preciodevideojuego\n");
    scanf("%f", &preciodevideojuego);
    
    descuentosiniva = preciodevideojuego - (preciodevideojuego * unidadescompradas * porcentaje / 100);
    
    printf("El descuentosiniva es: %.2f\n", descuentosiniva);
    
    printf("Introduzca descuentosiniva\n");
    scanf("%f", &descuentosiniva);
    
    descuentoconiva = (descuentosiniva * iva);
    
    printf("El descuentoconiva es: %.2f\n", descuentoconiva);
    
    
    printf("Introduzca el descuentoconiva\n");
    scanf("%f", &descuentoconiva);
    
    preciototal = descuentoconiva;
    
    printf("El preciototal es: %.2f\n", preciototal);

    

    return 0;
}