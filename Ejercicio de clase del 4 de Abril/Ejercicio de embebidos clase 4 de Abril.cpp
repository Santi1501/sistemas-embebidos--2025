#include <string>
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

struct Sensor{
    
    int sensor_id;
    int timestamp;
    int value_type;
    int value;
};

int numero_sensor = 0;

vector<string> split(string s, string delimiter){
    
    size_t pos = 0;
    string token;
    vector<string> tokens;
    while ((pos = s.find(delimiter)) != string::npos)
    {
        token = s.substr(0, pos);
        tokens.push_back(token);
        s.erase(0, pos + delimiter.length());
    }
    tokens.push_back(s); // Add the last token
    return tokens;
}

void parse_sensor(Sensor *sensor_vacio){
    
    printf("Ingrese la identificación del sensor: ");
    scanf("%d", &sensor_vacio ->sensor_id);
    
    printf("Ingrese la fecha y hora: ");
    scanf("%d", &sensor_vacio ->timestamp);
    
    printf("Ingrese el tipo de valor: ");
    scanf("%d", &sensor_vacio ->value_type);
    
    printf("Ingrese el valor del sensor: ");
    scanf("%d", &sensor_vacio ->value);
    
}

int get_highest_value(Sensor sensores[]){
    
    int valor_mas_alto;
    for(int i = 0; i < 5; i++){
        
        Sensor sensor_actual = sensores[i];
        if(i == 0){
            
            valor_mas_alto = sensor_actual.value;
        }
        else{
            
            if(valor_mas_alto < sensor_actual.value){
                
                valor_mas_alto = sensor_actual.value;
            }
        }
    }
    return valor_mas_alto;
}

int get_lowest_value(Sensor sensores[]){
    
    int valor_mas_bajo, sensor_actual;
    for(int i = 0; i < 5; i++){
        
        Sensor sensor_actual = sensores[i];
        if(i == 0){
            
            valor_mas_bajo = sensor_actual.value;
        }
        else{
            
            if(valor_mas_bajo > sensor_actual.value){
                
                valor_mas_bajo = sensor_actual.value;
            }
        }
    }
    return valor_mas_bajo;
}

float get_average_value(Sensor sensores[]){
    
    int suma = 0, numeros = 0;
    float promedio;
    for(int i = 0; i < 5; i++){
        
        Sensor sensor_actual = sensores[i];
        numeros++;
        suma += sensor_actual.value;
    }
    promedio = suma / numeros;
    return promedio;
}

int get_range_value(Sensor sensores[]){
    
    int bajo, alto, range[2];
    bajo = get_lowest_value(sensores);
    alto = get_highest_value(sensores);
    range[0] = bajo;
    range[1] = alto;
    return range[bajo, alto];
}

int find_sensor_by_id(Sensor sensores[]){
    
    int range[2];
    numero_sensor++;
    Sensor sensor_actual = sensores[numero_sensor];
    range[0] = numero_sensor;
    range[1] = sensor_actual.sensor_id;
    return range[numero_sensor, sensor_actual.sensor_id];
}

void get_sensor_information(Sensor sensores[]){
    
    
}

int main()
{
    string s = "test;abc";
    string delimiter = ";";
    vector<string> tokens = split(s, delimiter);
    
    struct Sensor sensores[5];
    
    printf("Base de datos de sensores.");
    for(int i = 0; i < 5; i++){
        
        parse_sensor(&sensor_vacio);
    }
}