#include <iostream>

int main() 
{
    int año, mes;
    printf("Ingrese el año: ");
    scanf("%d", & año);
    printf("Ingrese el mes: ");
    scanf("%d", & mes);
    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
        printf("El mes tiene 31 días.");
    }
    if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        printf("El mes tiene 30 días.");
    }
    if(mes == 2)
    {
        int resto = año % 4;
        if(resto == 0)
        {
            printf("El mes tiene 29 días.");
        }
        if(resto != 0)
        {
            printf("El mes tiene 28 días. ");
        }
    }
}