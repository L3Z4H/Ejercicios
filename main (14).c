// #include <stdio.h>

// int main(){
// //MENU  BASICO CON WHILE


// int menu = 1;

// while(menu != 3){
    
    
//     printf("Que quieres hacer del menu?\n");
//     printf("1- Hola Mundo\n");
//     printf("2- Adios Mundo\n");
//     printf("3-Salir\n");
//     scanf("%d", &menu);
    
//     if(menu == 1){
        
//         printf("Hola Mundo\n");
//     }else if(menu == 2){
        
//         printf("Adios Mundo\n");
//     }else if(menu == 3){
        
//         printf("Saliste del Menu\n");
//     }
// }

 
//     return 0;
// }






#include <stdio.h>

int main(){
//MENU  BASICO CON DO-WHILE


int menu = 1;

do{
    printf("Que quieres hacer del menu?\n");
    printf("1- Promedio de N cantidad de materias\n");
    printf("2- Uso de If y Else If\n");
    printf("3-Teorema de Pitagoras\n");
    printf("4- Salir del menu\n");
    scanf("%d", &menu);
    
    switch(menu){
        
        case 1:
        printf("Promedio de N cantidad de materias\n");
        break;
        
        case 2:
        printf("Uso de If y Else If\n");
        break;
        
        case 3:
        printf("Teorema de Pitagoras\n");
        break;
        
        case 4:
        printf("Saliste del menu\n");
        break;
        
        default:
        printf("Numero no valido\n");
        
        
    }
    
    
    
}while(menu != 4);

 
    return 0;
}
