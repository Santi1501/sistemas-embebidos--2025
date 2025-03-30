#include <iostream>

int main() {
    
    int n, numero, mayor = 0, menor = 0, posicion_mayor = 0, posicion_menor = 0;
    
    printf("Ingrese una cantidad de numeros que vaya a ingresar: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
     
        printf("Ingrese un numero: ");
        scanf("%d", &numero);
        
        if(i == 0){
            
            mayor = numero;
            menor = numero;
            posicion_mayor = i + 1;
            posicion_menor = i + 1;
            
        }
        
        if(i > 0){
            
            if(numero > mayor){
            
                mayor = numero;
                posicion_mayor = i + 1;
            
            }
        
            if(numero < menor){
            
                menor = numero;
                posicion_menor = i + 1;
            
            }
            
        }
        
    }
    
    printf("mayor numero: %d. posicion: %d", mayor, posicion_mayor);
    printf("\nmenor numero: %d. posicion: %d", menor, posicion_menor);
    
}