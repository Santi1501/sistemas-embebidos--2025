#include <iostream>

int main() {
    
    int valores[1000], cantidad = 0, valor;
    
    printf("Ingrese un valor (negativo para terminar): ");
    scanf("%d", &valor);
    
    while (valor >= 0 && cantidad < 1000) {
        valores[cantidad] = valor;
        cantidad++;
        printf("Ingrese un valor (negativo para terminar): ");
        scanf("%d", &valor);
    }
    
    printf("Cantidad de valores ingresados: %d.\n", cantidad);
    printf("Lista de valores ingresados:\n");
    
    for (int i = 0; i < cantidad; i++) {
        printf("%d ", valores[i]);
    }
    
}