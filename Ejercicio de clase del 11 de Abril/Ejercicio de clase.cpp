#include <string>
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
//\n
struct Persona{
    
    string nombre_y_apellido;
    int edad;
    char sexo;
    char tipo_de_vivienda;
    char nivel_estudios_alcanzados;
};
struct Familia{
    
    string domicilio;
    Persona integrantes[4];
};
void datos_integrantes_familiares(Persona *dato){
    
    printf("\nNombre y apellido del integrante familiar: ");
    scanf("%s", &dato -> nombre_y_apellido);
    
    printf("\nEdad: ");
    scanf("%d", &dato -> edad);
    
    printf("\nSexo: ");
    scanf("%c", &dato -> sexo);
    
    printf("\nTipo de vivienda: ");
    scanf("%c", &dato -> tipo_de_vivienda);
    
    printf("\nNivel de estudios alcanzados: ");
    scanf("%c", &dato -> nivel_estudios_alcanzados);
}
vector<Persona> filter_by_studies(Persona personas[], char study_type ){
    
    vector<Persona> personas_filtradas;
    for(int i = 0; i < 4; i++){
        
       if(personas[i].nivel_estudios_alcanzados == study_type){
        
            personas_filtradas.push_back(personas[i]);
        } 
    }
    return personas_filtradas;
}
void print_information(Persona persona){
    
    printf("\nNombre y apellido del integrante familiar: %s", persona.nombre_y_apellido);
    
    printf("\nEdad: %d", persona.edad);
    
    printf("\nSexo: %c", persona.sexo);
    
    printf("\nTipo de vivienda: %c", persona.tipo_de_vivienda);
    
    printf("\nNivel de estudios alcanzados: %c", persona.nivel_estudios_alcanzados);
}
void filter_by_age_greater_than(){
    
    
}
void filter_by_home_type(){
    
    
}
void find_family_with_most_university_graduates(){
    
    
}
int main() {
    
    for(int i = 1; i < 6; i++ ){
        
        printf("Familia %d.\n", i);
        for(int j = 0; j < 4; j++){
            
            Persona personas[j];
            datos_integrantes_familiares(&personas[j]);
        }
        filter_by_studies(&personas[], &study_type);
    }
    print_information(&personas[]);
}
