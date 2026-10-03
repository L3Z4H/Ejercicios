// #include <stdio.h>

// int main(){
    
//     //For: siempre se declara una variable de tipo entero/ int i= 0 
//     //While
//     //Do While
//     // i++ : significa suma, sirve para incrementar el valor 1 vez
    
    
//     for(int i = 0; i <= 10; i++){
        
//         printf("i vale %d\n", i);
//         printf("Hola mundo\n");
        
//     }

//     return 0;
// }


// #include <stdio.h>
// //FOR
// int main(){
    
    // //El usuario quiere elegir cuantas cuantas calificaciones subir para calcular su promedio y el prpograma le dira
    // //si paso o o no paso segun su promedio
    
    // int cantidadDematerias;
    // float promedio, calificacion;
    
    // printf("Ingresa la cantidadDematerias que queiere subir\n");
    // scanf("%d", &cantidadDematerias);
    
    // for(int i =0; i < cantidadDematerias; i++){
        
    //     printf("Ingrese la calificacion %d: ", i + 1);
    //     scanf("%f", &calificacion);
    //     promedio += calificacion;
    //     //lo mismo que poner: promedio = promedio + calificacion
    // }
    
    // //promedio/=cantidadDematerias
    // promedio = promedio / cantidadDematerias;
    
    // printf("El promedio es: %.2f\n", promedio);
    
    // if(promedio >= 7){
        
    //     printf("Felicidades pasaste con un promedio de: %.2f\n", promedio);
    // }
    
    
    // return 0;
    
// }


#include <stdio.h>

int main(){
    
    //WHILE     //para romper bucle infinito= ctrl+c
    
    char letra = 'a';
    char letra2 = 'A';
    char letra3 = 'a';
    
    
    while(letra == 'A'){
        
       printf("Esta es una prueba de while\n"); 
        
        
    }
    do{
        
        printf("Esta es una prueba de do  while\n");
    }while( letra =='A');
    
    
    return 0;
}





