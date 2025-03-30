#include <iostream>

int main() {
    
    float sueldos[1000], sueldo;
    int cantidad = 0, empleados1 = 0, empleados2 = 0, empleados3 = 0, empleados4 = 0;
    
    printf("Ingrese el sueldo del empleado (0 para terminar): ");
    scanf("%f", &sueldo);
    
    while (sueldo > 0 && cantidad < 1000){
        
        sueldos[cantidad] = sueldo;
        
        cantidad++;
        
        if(sueldo < 1520){
            
            empleados1++;
            
        }
        
        if(sueldo >= 1520 && sueldo < 2780){
            
            empleados2++;
            
        }
        
        if(sueldo >= 2780 && sueldo < 5999){
            
            empleados3++;
            
        }
        
        if(sueldo >= 5999){
            
            empleados4++;
            
        }
        
        printf("Ingrese el sueldo del empleado (0 para terminar): ");
        scanf("%f", &sueldo);
        
    }
    
    printf("Empleados que ganan menos de $1520: %d\n", empleados1);
    printf("Empleados que ganan $1.520 o más pero menos de $2.780: %d\n", empleados2);
    printf("Empleados que ganan $2.780 o más pero menos de $5.999: %d\n", empleados3);
    printf("Empleados que ganan $5.999 o más: %d", empleados4);
    
}