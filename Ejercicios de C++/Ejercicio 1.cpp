#include <iostream>

int main() 
{
    int A, B, suma, producto, resta;
    printf("ingrese un numero entero A: ");
    scanf("%d", & A);
    printf("ingrese un numero entero B: ");
    scanf("%d", & B);
    suma = A + B;
    resta = A - B;
    producto = A * B;
    printf(" Suma: %d. Resta: %d. Produto: %d.", suma, resta, producto);
}