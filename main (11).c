#include <stdio.h>

int main(){
    
    float kevins;
    float celsius;
    
    printf("Ingresa los grados kevins\n");
    scanf("%f", &kevins);
    
    celsius= kevins -  273.15;
    
    if(celsius >=0 && celsius <=11){
        
        printf("Esta congelandose\n");
    }else if(celsius >=12 && celsius <=20){
        
         printf("Esta frio\n");
    }else if(celsius >=21 && celsius <=30){
        
        printf("Esta templado\n");
    }else if(celsius >=31 && celsius<=40){
        
        printf("Esta caliente\n");
    }else if(celsius >=41 && celsius <=50){
        
        printf("Esta en Ciudad Juarez\n");
    }
    
    

    return 0;
}