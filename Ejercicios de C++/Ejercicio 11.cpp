#include <iostream>

int main() 
{
    int edad;
    printf("Ingrese su edad: ");
    scanf("%d", & edad);
    if(edad <= 12)
    {
        printf("Menor.");
    }
    if(edad >= 13 && edad <= 18)
    {
        printf("Cadete.");
    }
    if(edad > 18 && edad <= 26)
    {
        printf("Juvenil.");
    }
    if(edad > 26)
    {
        printf("Mayor.");
    }
}