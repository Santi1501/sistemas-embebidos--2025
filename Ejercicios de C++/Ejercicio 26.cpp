#include <iostream>

int main(){
    
    int peso_buque = 0, id_contenedor_mayor_peso, peso_maximo;
    
    printf("Registro de contenedores.\n");
    struct Contenedor{
    
        int identificacion;
        int peso;
        int puerto;
        
    };
    
    struct Contenedor contenedores[100];
    
    for(int i = 0; i < 100; i++){
        
        struct Contenedor dato;
        
        printf("\nIdentificación: ");
        scanf("%d", &dato.identificacion );
        
        printf("\nIngrese el peso del contenedor: ");
        scanf("%d", &dato.peso );
        
        peso_buque += dato.peso; 
        
        printf("\nIngrese el puerto de arribo: ");
        scanf("%d", &dato.puerto );
        
        if (dato.peso > peso_maximo) {
            
            peso_maximo = dato.peso;
            id_contenedor_mayor_peso = dato.identificacion;
        
        }
        
        contenedores[i] = dato;
        
    }
    
    int puerto1 = 0, puerto2 = 0, puerto3 = 0;
    
    for(int i = 0; i < 100; i++){
        
        if (contenedores[i].puerto == 1 ){
            
            puerto1++;
            
        }
        if (contenedores[i].puerto == 2 ){
            
            puerto2++;
            
        }
        if (contenedores[i].puerto == 3 ){
            
            puerto3++;
            
        }
        
    }
    
    printf("\nPeso total de carga: %dkg.\n", peso_buque);
    
    printf("Contenedor de mayor peso: %d. Peso: %dkg\n.", id_contenedor_mayor_peso, peso_maximo);
    
    printf("Contenedores del puerto 1: %d. Contenedores del puerto 2: %d. Contenedores del puerto 3: %d.", puerto1, puerto2, puerto3);
}