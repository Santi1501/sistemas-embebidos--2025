#include <iostream>

int main() 
{
    int n, m, producto;
    printf("Ingrese el primer número: ");
    scanf("%d", & n);
    printf("Ingrese el segundo numero: ");
    scanf("%d", & m);
    for(int i = 0; i < n; i++)
    {
        producto = producto + m ;
    }
    printf("resultado: %d ", producto);
}