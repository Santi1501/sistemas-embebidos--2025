#include <iostream>

int main() 
{
    int num;
    printf("Ingrese un número entero: ");
    scanf("%d", & num);
    float quinta_parte_num = num / 5;
    float resto = num % 5;
    float x = quinta_parte_num / 7;
    printf("quinta parte del numero: %f", quinta_parte_num );
    printf("\nresto: %f", resto);
    printf("\nseptima parte de la quinta parte del numero: %f", x);
}