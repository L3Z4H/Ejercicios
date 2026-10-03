
#include <stdio.h>

int vidaPersonaje = 100, ataquePersonaje = 25, defensaPersonaje = 100, vidaEnemigo = 120, ataqueEnemigo = 20, defensaEnemigo = 8;

void ataque(){
    
    float daño;
    printf("El jugador ataca al enemigo\n");
    printf("El enemigo a utilizado su defensa\n");

    daño = ataquePersonaje - defensaEnemigo;
    
    printf("Pero tu ataque logro causarle un daño de: %.0f puntos, bien hecho\n",daño);
    
    //Vida del enemigo
     vidaEnemigo = vidaEnemigo - daño;
    
    printf("Le has restado salud al enemigo, ahora tiene de vida : %.d\n", vidaEnemigo);
    
}

void curacion(){
    
    int puntosDeVida = 20, herido = 50;
    float recuperado;
    
    printf("Estas herido, y tienes: %.0d de vida, pero te has curado con una venda magica\n", herido);
    recuperado = herido + puntosDeVida;
    printf("y haz recuperado 20 puntos de salud ahora tienes: %.2f\n", recuperado);
    
    
}
    
void huir(){
    printf("El jugador huye de la zona de combate, dejando al enemigo atras\n");
    printf("Cobarde\n");
}
    
int main() {
    
    int combate = 1;
    
    
    do{
         printf("\nEstas en combate activo con un enemigo, pulsa que quieres hacer:\n");
         printf("1- Atacar\n");
         printf("2- Curarse\n");
         printf("3- Huir\n");
         scanf("%d", &combate);
         
         switch (combate) {
             
             case 1:
             ataque();
             break;
             
             case 2:
             curacion();
             break;
             
             case 3:
             huir();
             break;
             
             
             default:
             printf("Opcion no valida\n");
             
         }
         
    }while(combate!= 3);
    
    return 0;
         
         
}


