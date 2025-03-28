#include <iostream>

struct Contenedor{
        
        int identificacion;
        int peso;
        int puerto;    
        
    };

void registro_de_datos(Contenedor *contenedor_vacio){
    
    printf("\nIdentificación: ");
    scanf("%d", &contenedor_vacio ->identificacion);
        
    printf("\nIngrese el peso del contenedor: ");
    scanf("%d", &contenedor_vacio ->peso);
        
    printf("\nIngrese el puerto de arribo: ");
    scanf("%d", &contenedor_vacio ->puerto);
        
}

int main(){
    
    int peso_buque = 0, id_contenedor_mayor_peso, peso_maximo;
    int puerto1 = 0, puerto2 = 0, puerto3 = 0;
    
    printf("Registro de contenedores.\n");
    struct Contenedor contenedores[100];
    
    for(int i = 0; i < 100; i++){
        
        Contenedor contenedor_actual = contenedores[i];
        registro_de_datos(&contenedor_actual);
        
        if (contenedor_actual.peso > peso_maximo) {
            
        peso_maximo = contenedor_actual.peso;
        id_contenedor_mayor_peso = contenedor_actual.identificacion;
        
        }
        
        peso_buque += contenedor_actual.peso;
        
        if (contenedor_actual.puerto == 1 ){
            
            puerto1++;
            
        }
        if (contenedor_actual.puerto == 2 ){
            
            puerto2++;
            
        }
        if (contenedor_actual.puerto == 3 ){
            
            puerto3++;
            
        }
        
    }
    
    printf("\nPeso total de carga: %dkg.\n", peso_buque);
    
    printf("Contenedor de mayor peso: %d. Peso: %dkg.\n", id_contenedor_mayor_peso, peso_maximo);
    
    printf("Contenedores del puerto 1: %d. Contenedores del puerto 2: %d. Contenedores del puerto 3: %d.", puerto1, puerto2, puerto3);
}