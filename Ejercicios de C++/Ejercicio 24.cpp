#include <iostream>
#include <string>

int main() {
    
    int valor, valores = 0, suma = 0, sublotes = 0, valor_max = 0, posicion = 0, sublote_guardado = 0, valor_min_sublote[1000];
    float prom[1000];
    
    printf("Ingrese un numero: ");
    scanf("%d", &valor);
    
    while(valor >= 0){
        
        if(valor == 0){
            
            sublotes++;
            
            if (valores > 0){
                
                prom[sublotes - 1] = suma / (float)valores;
                valores = 0;
                suma = 0;
                
            }
            
        }
        
        if(valor > 0){
            
            valores++;
            suma += valor;
            
            if(valor > valor_max){
                
                valor_max = valor;
                sublote_guardado = sublotes;
                posicion = valores;
                
            }
            
            if(valores == 1){
                
                valor_min_sublote[sublotes] = valor;
                
            }
            
            if(valores > 1){
                
                if(valor < valor_min_sublote[sublotes]){
                    
                    valor_min_sublote[sublotes] = valor;
                    
                }
                
            }
            
        }
        
        printf("Ingrese un numero: ");
        scanf("%d", &valor);
        
    }
    
    printf("\nPromedio de cada sublote.\n");
    for(int i = 0; i < sublotes; i++){
        
        printf("\nPromedio sublote %d: %f\n", i + 1, prom[i+1]);
        
    }
    
    printf("\nCantidad de sublotes: %d\n", sublotes);
    
    printf("\nValor máximo: %d. Sublote: %d. Posicion: %d\n", valor_max, sublote_guardado, posicion);
    
    for(int i = 0; i < sublotes; i++){
        
        printf("\nValor minimo del sublote %d: %d", i + 1, valor_min_sublote[i+1]);
        
    }
}