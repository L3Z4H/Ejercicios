#include <stdio.h>

// Teorema de pitagoras

float c;
int a;
int b;
char inicial;

printf("Ingrese el valor del cateto a\n");
scanf ("%d", &a);

printf("Ingrese el valor del cateto b\n");
scanf ("%d", &b);

printf("Ingrese una letra\n");
scanf ("%c", &inicial);

c = a * a + b * b;

printf("El valor de c2 es: %.2f la inicial es: %c", c, inicial);



    return 0;
}
