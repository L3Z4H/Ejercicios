#include <stdio.h>
 
void sumar(){

    float a,b,respuesta;

    printf("Ingresa valor de a\n");

    scanf("%f", &a);

    printf("Ingresa valor de b\n");

    scanf("%f", &b);

    printf("Resultado: %.2f + %.2f = %.2f\n", a, b, a + b);

}
 
 
void restar(){

    float a,b,respuesta;

    printf("Ingresa valor de a\n");

    scanf("%f", &a);

    printf("Ingresa valor de b\n");

    scanf("%f", &b);

    printf("Resultado: %.2f - %.2f = %.2f\n", a, b, a - b);

}
 
void multiplicar(){

    float a,b,respuesta;

    printf("Ingresa valor de a\n");

    scanf("%f", &a);

    printf("Ingresa valor de b\n");

    scanf("%f", &b);

    printf("Resultado: %.2f * %.2f = %.2f\n", a, b, a * b);


}
 
void dividir(){

    float a,b,respuesta;

    printf("Ingresa valor de a\n");

    scanf("%f", &a);

    printf("Ingresa valor de b\n");

    scanf("%f", &b);

    printf("Resultado: %.2f / %.2f = %.2f\n", a, b, a / b);

}
 
 
 
int main(){

    int menu = 1;
    int valor;

    do{

        printf("Calculadora\n");
        printf("1-sumar\n");
        printf("2-restar\n");
        printf("3-multiplicar\n");
        printf("4-dividir\n");
        printf("5-Salir del menu\n");
        scanf("%d", &menu);


    switch(menu){
        
        case 1:
        sumar();
        break;
        
        case 2:
        restar();
        break;
        
        case 3:
        multiplicar();
        break;
        
        case 4:
        dividir();
        break;
        
        case 5:
        printf("5-Saliste del menu\n");
        break;
        
        default:
        printf("Numero no valido\n");

    }

    }while(menu != 5);
 
    return 0;

}
 