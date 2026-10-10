#include <stdio.h>
 
int carrosEsperando1= 15, carrosEsperando2= 8, carrosAvanzando1=0, carrosAvanzando2= 0, tiempotranscurrido =0, cicloActual= 1;
 
void activarAvenida(){
    
    float avanzando;
    
    printf("La avenida principal ha sido activada.\n");
    if(carrosEsperando1 > 0){
        
        avanzando = carrosEsperando1 - 5;
        
        carrosAvanzando1= carrosAvanzando1 +avanzando;
        carrosEsperando1= 5;
        printf("%.0f carros avanzaron por la avenida principal.\n", avanzando);
    }else{
        printf("No hay carros\n");
    }
    tiempotranscurrido= tiempotranscurrido + 5;

}
 
void activarSecundaria(){
    
    float avanzando;
    
    printf("La calle secundria ha sido activada\n");
    if(carrosEsperando2 > 0){
        
        avanzando = carrosEsperando2;
        
        carrosAvanzando2= carrosAvanzando2 +avanzando;
        carrosEsperando2= 0;
        printf("%.0f carros avanzaron por la calle secundaria\n", avanzando);
    }else{
        printf("No hay carros\n");
    }
    tiempotranscurrido= tiempotranscurrido + 5;

}
 
 
void consultarEstado(){
    

    float esperando1, esperando2, avanzando1, avanzando2, transcurrido;
    
    avanzando1= (carrosEsperando1 - 5);
    avanzando2= carrosEsperando2;
    esperando1= (carrosEsperando1- 10);
    esperando2= 0;
    transcurrido= tiempotranscurrido + 5 + 5;
    
    printf("==TRAFICO==\n");
    printf("Por la Avenida Principal avanzaron un total de %.0f carros, y %.0f se quedaron en espera\n", avanzando1, esperando1);
    printf("En la Calle Secundaria avanzaron %.0f carros y quedaron %.0f en espera\n", avanzando2, esperando2);
    
    printf("El ciclo actual es: %d de 10\n", cicloActual);
    printf("Tiempo transcurrido: %.0f segundos\n", transcurrido);
}
 
 
void mostrarReporte(){
    float avanzando, esperando, simulado;
    int esperando2= 0;
    
    avanzando = carrosEsperando1 - 5;
    esperando = carrosEsperando1 - 10;
    simulado = tiempotranscurrido + 5 + 5;
    
   printf("REPORTE\n");
   printf("== Vehiculos que avanzaron == \n");
   printf("AVENIDA PRINCIPAL: %.0f\n", avanzando);
   printf("CALLE SECUNDARIA: %.0d\n ", carrosEsperando2);
   
      printf("== Vehiculos esperando == \n");

   
       printf("AVENIDA PRINCIPAL: %.0f\n ", esperando);
   printf("CALLE SECUNDARIA: %d\n ", esperando2);
   
   printf("Tiempo simulado: %.0f segundos\n", simulado);


}
 
 
int main(){
    int menu=1;

do{
    printf("SIMULADOR DE TRAFICO\n");
    printf("1-Activar avenida pincipal\n");
        printf("2-Activar calle secundaria\n");
    printf("3-Consultar estado del trafico\n");
    printf("4-Avanzar al siguiente ciclo\n");
    printf("5-Finalizar simulacion\n");
    scanf("%d", &menu);

    switch(menu){
        case 1:
        activarAvenida();
        break;
        
        case 2:
        activarSecundaria();
        break;
        
        case 3:
        consultarEstado();
        break;
        
        case 4:
        cicloActual++;
        tiempotranscurrido= tiempotranscurrido + 10;
        printf("Se ha avanzado al ciclo: %d  \n", cicloActual);
        
        if(cicloActual > 10){
            printf("Se completaron los 10 ciclos\n");
            mostrarReporte();
            return 0;
            
        } 
         break; 
        
        case 5:
        mostrarReporte();
        break;
        
        default:
        printf("Opcion no valida\n");
    }
 
    
}while(menu!=5);
 
    return 0;
}