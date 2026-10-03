#include <stdio.h>

int main(){
    
    //3 Calificaciones
    
    float cal1, cal2, cal3;
    float promedio1, promedio2;
    
    
    printf("Hola alumno 1, ingresa tu calificacion\n");
    scanf("%f", &cal1);
    
    printf("Ingresa tu calificacion\n");
    scanf("%f", &cal2);
    
    printf("Ingresa tu calificacion\n");
    scanf("%f", &cal3);
    
    promedio1 = (cal1 + cal2 + cal3) / 3;
    
    printf("El promedio1 es: %.1f\n", promedio1);
    
    
    
    printf("Alumno 2, ingresa tu calificacion\n");
    scanf("%f", &cal1);
    
    printf("Ingresa tu calificacion\n");
    scanf("%f", &cal2);
    
    printf("Ingresa tu calificacion\n");
    scanf("%f", &cal3);
    
    promedio2 = (cal1 + cal2 + cal3) / 3;
    
    
    printf("El promedio2 es: %.1f\n", promedio2);
    
    
    printf("Ingresa promedio1\n");
    scanf("%f", &promedio1);
    
    printf("Ingresa promedio2\n");
    scanf("%f", &promedio2);
    
    if( promedio1 > promedio2 ) {
        
        printf("Alumno 1 tu promedio es mas alto que el del alumno 2\n");
        
        
    } else {
        
        printf("Alumno 2 tu promedio es mas alto que el del alumno 1\n");
        
    }
    
    
    
    return 0;
}