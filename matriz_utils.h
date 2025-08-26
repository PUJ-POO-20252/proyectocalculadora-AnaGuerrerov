//
// Created by Joyeria Sofi on 25/08/2025.
//

#ifndef CALCULADORA_MATRIZ_UTILS_H
#define CALCULADORA_MATRIZ_UTILS_H
#include <string>

const int FILAS = 2;
const int COLUMNAS = 3;

void sumarMatrices(const int (&a)[FILAS][COLUMNAS], const int (&b)[FILAS][COLUMNAS], int (&resultado)[FILAS][COLUMNAS]); //Suma de matriz 2x3
void imprimirMatriz(const std::string& titulo, const int (&matriz)[FILAS][COLUMNAS]); //Imprime una matriz con titulo

#endif //CALCULADORA_MATRIZ_UTILS_H
