#include <iostream>

int main() 
{
    int suma = 0;
    for(int i = 1; i < 101 ; i++ )
    {
        printf("%d \n", i);
        suma = suma + i;
    }
    printf("suma del 1 al 100: %d", suma);
}