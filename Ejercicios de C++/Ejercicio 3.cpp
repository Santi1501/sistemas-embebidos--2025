#include <iostream>

int main() 
{
    int codigo;
    printf("Ingresar numero de 8 dígitos: ");
    scanf("%d", & codigo);
    int año = codigo / 10000 ;
    int mes = (codigo - (año * 10000)) / 100 ;
    int dia = codigo % 100;
    printf("\naño: %d", año);
    printf("\nmes: %d", mes);
    printf("\ndia: %d", dia);
}