#include <iostream>
#include <string>

int main() {
    
    int año, mes, dia, mayor_año = 0, mayor_dia = 0, mayor_mes = 0;
    int menor_año = 0, menor_mes = 0, menor_dia = 0, orden_nombres = 0;
    std::string nombre, persona_mayor, persona_joven;
    
    printf("\nIngrese un nombre: ");
    std::cin >> nombre;
    
    while(nombre != "FIN"){
        
        orden_nombres++;
        
        printf("\nIngrese fecha de nacimiento.");
        
        printf("\nAño: ");
        scanf("%d", &año);
        
        printf("\nMes: ");
        scanf("%d", &mes);
        
        printf("\nDía: ");
        scanf("%d", &dia);
        
        if(orden_nombres == 1){
            
            mayor_año = año;
            mayor_mes = mes;
            mayor_dia = dia;
            
            menor_año = año;
            menor_mes = mes;
            menor_dia = dia;
            
            persona_mayor = nombre;
            persona_joven = nombre;
            
        }
        
        if(orden_nombres > 1){
            
            if(año > mayor_año){
                
                mayor_año = año;
                persona_joven = nombre;
                
            }
            
            if(año < menor_año){
                
                menor_año = año;
                persona_mayor = nombre;
                
            }
            
            if(año == mayor_año){
                
                if(mes == mayor_mes){
                    
                    if(dia >= mayor_dia){
                        
                        mayor_dia = dia;
                        persona_joven = nombre;
                        
                    }
                    
                }
                
                if(mes > mayor_mes){
                    
                    mayor_mes = mes;
                    persona_joven = nombre;
                    
                }
                
            }
            
            if(año == menor_año){
                
                if(mes == menor_mes){
                    
                    if(dia <= menor_dia){
                        
                        menor_dia = dia;
                        persona_mayor = nombre;
                        
                    }
                    
                }
                
                if(mes < menor_mes){
                    
                    menor_mes = mes;
                    persona_mayor = nombre;
                    
                }
                
            }
            
        }
        
        printf("Ingrese un nombre: ");
        std::cin >> nombre;
        
    }
    
    std::cout << "\nPersona de mayor edad: " << persona_mayor << std::endl;
    std::cout << "\nPersona más joven: " << persona_joven << std::endl;
    
}