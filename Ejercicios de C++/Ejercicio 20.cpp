#include <iostream>

int main() {
    
    int mayor = 0, numero;
    
    for(int i = 0; i < 10; i++){
        
        printf("Ingrese un numero: ");
        scanf("%d", &numero);
        
        if(numero > mayor){
            
            mayor = numero;
            
        }
        
    }
    
    printf("El numero mayor ingresado es: %d", mayor);
    
}