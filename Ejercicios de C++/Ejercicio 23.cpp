#include <iostream>
#include <string>

int main() {
    
    float prom = 0, valor = 0, suma = 0, max_negativo = 0, min_positivo, valor_min_rango = 0;
    int numeros = 0;
    
    printf("Ingrese un numero: ");
    scanf("%f", &valor);
    
    while(valor != 0){
        
        numeros++;
        suma += valor; 
        
        if(numeros == 1){
            
            if(valor >= -17.3 && valor <= 26.9 ){
                
                valor_min_rango = valor;
                
            }
            
            if(valor > 0){
                
                min_positivo = valor;
                
            }
            
            if(valor < 0){
                
                max_negativo = valor;
                
            }
            
        }
        
        if(numeros > 1){
            
            if(valor >= -17.3 && valor <= 26.9 ){
                
                if(valor < valor_min_rango){
                    
                    valor_min_rango = valor;
                    
                }
                
            }
            
            if(valor > 0){
                
                if(valor < min_positivo){
                    
                    min_positivo = valor;
                    
                }
                
            }
            
            if(valor < 0){
                
                if(valor > max_negativo){
                    
                    max_negativo = valor;
                    
                }
                
            }
            
        }
        
        printf("\nIngrese un numero: ");
        scanf("%f", &valor);
    }
    
    prom = suma / numeros;
    
    if(numeros > 0){
        
        printf("\nValor máximo negativo: %f", max_negativo);
        printf("\nValor mínimo positivo: %f", min_positivo);
        printf("\nValor mínimo dentro del rango -17.3 y 26.9: %f", valor_min_rango);
        printf("\nPromedio de todos los números: %f.", prom);
        
    }
    
}