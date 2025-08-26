//
// Created by Joyeria Sofi on 25/08/2025.
#include "matriz_utils.h"
#include <iostream>


void sumarMatrices(const int (&a)[FILAS][COLUMNAS],const int (&b)[FILAS][COLUMNAS], int (&resultado)[FILAS][COLUMNAS]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            resultado[i][j] = a[i][j] + b[i][j];
        }
    }
}

void imprimirMatriz (const std::string& titulo, const int (&matriz)[FILAS][COLUMNAS]) {
    std::cout << titulo << std::endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << matriz[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

