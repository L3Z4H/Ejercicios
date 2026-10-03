#include <stdio.h>

int main(){
    
    //Inicial y promedio
    
    char inicial;
    float parcial1, parcial2, parcial3;
    float promedio;
    
    printf("Dame tu parcial1\n");
    scanf("%f", &parcial1);
    
    
    printf("Dame tu parcial2\n");
    scanf("%f", &parcial2);
    
    
    printf("Dame tu parcial3\n");
    scanf("%f", &parcial3);
    
    promedio = (parcial1 + parcial2 + parcial3) /3;
    
    printf("Tu inicial es c, con un promedio de: %.2f\n", promedio);
    















    return 0;
}
