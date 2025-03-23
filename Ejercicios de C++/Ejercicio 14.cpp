#include <iostream>

int main() 
{
    int suma = 0, cnum = 0, suma2;
    int numbers[5];
    for(int i = 0; i <= 4; i++)
    {
        printf("Ingrese un número: ");
        scanf("%d", & numbers[i]);
        if (numbers[i] > 100)
        {
            suma = suma + numbers[i];
            cnum++;
        }
        if (numbers[i] < -10)
        {
            suma2 = suma2 + numbers[i];
        }
    }
    float prom = suma / cnum;
    printf("El promedio de los números mayores a 100 es %.2f. ", prom);
    printf("La suma de los números menores que -10 es %d.", suma2);
}