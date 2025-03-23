#include <iostream>

int main() 
{
    int x, y;
    printf("Ingrese un valor entero: ");
    scanf("%d", & x);
    printf("Ingrese un valor entero distinto del primero: ");
    scanf("%d", & y);
    while(x == y)
    {
        printf("Error. Ingrese un valor entero distinto del primero: ");
        scanf("%d", & y);
    }
    if(x > y)
    {
        printf("El primer numero %d es mayor que el segundo, %d", x, y);
    }
    if(x < y)
    {
        printf("El segundo numero %d es mayor que el primero, %d", y, x);
    }
}