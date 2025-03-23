#include <iostream>

int main() 
{
    int fecha1[3], fecha2[3];
    printf("Ingrese el año de la primer fecha: ");
    scanf("%d", & fecha1[2]);
    printf("Ingrese el mes de la primer fecha: ");
    scanf("%d", & fecha1[1]);
    printf("Ingrese el dia de la primer fecha: ");
    scanf("%d", & fecha1[0]);
    printf("\nIngrese el año de la segunda fecha: ");
    scanf("%d", & fecha2[2]);
    printf("Ingrese el mes de la segunda fecha: ");
    scanf("%d", & fecha2[1]);
    printf("Ingrese el dia de la segunda fecha: ");
    scanf("%d", & fecha2[0]);
    if(fecha1[2] == fecha2[2])
    {
        if(fecha1[1] == fecha2[1])
        {
            if(fecha1[0] == fecha2[0])
            {
                printf("la primer y la segunda fecha son las mismas.");
            }
            if(fecha1[0] > fecha2[0])
            {
                printf("La primer fecha es la más reciente.");
            }
            if(fecha1[0] < fecha2[0])
            {
                printf("La segunda fecha es la más reciente.");
            }
        }
        if(fecha1[1] > fecha2[1])
        {
            printf("La primer fecha es la más reciente.");
        }
        if(fecha1[1] < fecha2[1])
        {
            printf("La segunda fecha es la más reciente.");
        }
    }
    if(fecha1[2] > fecha2[2])
    {
        printf("La primer fecha es la más reciente.");
    }
    if(fecha1[2] < fecha2[2])
    {
        printf("La segunda fecha es la más reciente.");
    }
}