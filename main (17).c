
#include <stdio.h>

float AreaRectangulo, PerimetroRectangulo;

void area(){
    
    float base, altura;
    printf("Ingresa la base\n");
    scanf("%f", &base);
    printf("Ingresa la altura\n");
    scanf("%f", &altura);
    AreaRectangulo = base * altura;
    printf("El Area del rectangulo es: %.2f * %.2f = %.2f\n", base, altura, AreaRectangulo);
}

void perimetro(){
    
    float base, altura;
    printf("Ingresa la base\n");
    scanf("%f", &base);
    printf("Ingresa la altura\n");
    scanf("%f", &altura);
    PerimetroRectangulo = 2 * (base + altura);
    printf("El perimetro del rectangulo es: 2 * (%.2f + %.2f) = %.2f\n", base, altura, PerimetroRectangulo);
}
    
void resultados(){
    printf("El area del rectangulo es: %.2f\n", AreaRectangulo);
    printf("El perimetro del rectangulo es: %.2f\n", PerimetroRectangulo);
}
    
int main() {
    
    float base, altura, AreaRectangulo, PermietroRectangulo;
    int menu = 1;
    
    
    do{
         printf("Menu\n");
         printf("1- Calcular area del rectangulo\n");
         printf("2- Calcular perimetro del rectangulo\n");
         printf("3- Mostrar resultados\n");
         printf("4- Salir del Menu\n");
         scanf("%d", &menu);
         
         switch (menu) {
             
             case 1:
             area();
             break;
             
             case 2:
             perimetro();
             break;
             
             case 3:
             resultados();
             break;
             
             case 4:
             printf("4- Saliste del Menu\n");
             break;
             
             default:
             printf("Numero no valido\n");
             
         }
         
    }while(menu!= 4);
    
    return 0;
         
         
}


