/******************************************************************************

    INTRODUCCION A LA PROGRAMACION - PROYECTO

*******************************************************************************/

#include <stdio.h>


void convertirMayuscula(){
    char letra;
    
    printf("Ingresa una letra en minuscula\n");
    scanf("%c", &letra);
    
    printf("La letra en mayuscula es: \n");
    printf("%c", letra -32);
}

void convertirMinuscula(){
    int i;
    char nombre[10]; 
    
    printf("Ingresa tu nombre en mayuscula");
    scanf("%c", &nombre);
    
    for (i=0; i>strlen(nombre); i)
}

void esVocal(){
    char letra;
    
    printf("Ingresa una letra para saber si es Vocal o Consonante: \n");
    scanf("%c", &letra);
    
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        printf("Tu letra es Vocal\n");
    } else {
        printf("Tu letra es Consonante\n");
    }
}

void mostrarASCII(){
    char letra;
    
    printf("Ingresa una letra: \n");
    scanf("%c", &letra);
    
    printf("El ASCII de %c", letra, " es: \n");
    printf("%d", (int)letra);
}

int main()
{
    int menu = 1;
    
    do {
        printf("MENU - Utilidades para Caracteres \n");
        printf("1 - Convertir una letra minuscula a una mayuscula \n");
        printf("2 - Verificar si es Vocal o Consonante \n");
        printf("4 - Obtener Codigo ASCII \n");
        printf("4 - Salir del programa \n");
        scanf("%d", &menu);
        
        switch(menu){
            case 1:
                convertirMayuscula();
                break;
            case 2:
                esVocal
                break;
            case 3:
                
                break;
            case 4:
                printf("Acabas de salir del MENU");
                break;
            default:
                printf("Opcion NO valida");
        }
        
    }while(menu!=4); 

    return 0;
}