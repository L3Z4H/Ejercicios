#include <stdio.h>

int main()
{
    int farenheit = 0;
    int celsius = 31;
    
    printf("Dame la temperatura en farenheit\n");
    scanf("%d", &farenheit);
    
    if( farenheit > 89 )  {
        printf("Si pasa de los 31 grados celsius\n");
    }
    else { 
        
        printf("No pasa los 31 grados celsius\n");
    }

    return 0;
}
