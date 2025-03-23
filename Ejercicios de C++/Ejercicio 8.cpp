#include <iostream>

int main() 
{
    int l1, l2, l3, suma1, suma2, suma3;
    do{
    printf("Longitud lado 1: ");
    scanf("%d", & l1);
    printf("Longitud lado 2: ");
    scanf("%d", & l2);
    printf("Longitud lado 3: ");
    scanf("%d", & l3);
    suma1 = l1 + l2; 
    suma2 = l2 + l3;
    suma3 = l3 + l1;
    }while(suma1 <= l3 || suma2 <= l1 || suma3 <= l2 );
    if(l1 == l2 && l2 == l3 && l3 == l1 )
    {
        printf("Triángulo equilatero.");
    }
    if(l1 != l2 && l2 != l3 && l3 == l1 )
    {
        printf("Triángulo isósceles.");
    }
    if(l1 == l2 && l2 != l3 && l3 != l1 )
    {
        printf("Triángulo isósceles.");
    }
    if(l1 != l2 && l2 == l3 && l3 != l1 )
    {
        printf("Triángulo isósceles.");
    }
    if(l1 != l2 && l2 != l3 && l3 != l1 )
    {
        printf("Triángulo escaleno.");
    }
}