#include <stdio.h>

void main() {

    int num1;
    int num2;

    printf("Ingrese el primer n%cmero entero:",163);
    scanf("%i",&num1);
    fflush(stdin);

    printf("Ingrese el segundo n%cmero entero: ",163);
    scanf("%i",&num2);
    fflush(stdin);

    if (num1 < num2) printf("El n%cmero %i es menor al n%cmero %i",163,num1,163,num2);

    else printf("El n%cmero %i es menor al n%cmero %i",163,num2,163,num1);

}