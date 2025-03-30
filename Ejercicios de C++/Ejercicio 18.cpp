#include <iostream>

int main() {
    
    int m, numero = 0, resto;
    
    printf("Ingrese un numero: ");
    scanf("%d", &m);
    
    for(int i = 0; i < m; i++){
        
        numero += 3;
        resto = numero % 5;
        if(resto != 0){
            
            printf("\nmultiplo de 3 que no es de 5: %d", numero);
            
        }
        else{
            
            numero += 3;
            printf("\nmultiplo de 3 que no es de 5: %d", numero);
            
        }
        
    }
    
}