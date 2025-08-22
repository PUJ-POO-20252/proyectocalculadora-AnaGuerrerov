//
// Created by Joyeria Sofi on 19/08/2025.
//
#include <iostream>
#include "matematicas.h"

//----Definiciones ---
int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

double dividir(int a, int b) {
    if (b == 0){   //Condicion en caso de usar un cero para dividir
        std::cout << "Error: Se debe dividir diferente de cero" << std::endl;
    return 0;
}
    return static_cast<double>(a) / b;  // Se convierte a double para los decimales
}

