#include <iostream>

int main() 
{
    int dia, mes, año;
    printf("Ingrese el año: ");
    scanf("%d", & año);
    printf("Ingrese el mes del año: ");
    scanf("%d", & mes);
    while( mes > 12 || mes < 1)
    {
        printf("Ingrese el mes del año: ");
        scanf("%d", & mes);
    }
    printf("Ingrese el dia del mes: ");
    scanf("%d", & dia);
    while( dia > 31 || dia < 1)
    {
        printf("Ingrese el dia del mes: ");
        scanf("%d", & dia);
    }
    printf("número: %04d%02d%02d\n", año, mes, dia);
}