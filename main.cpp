#include <iostream>
#include "matematicas.h"


// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int x,y;
    std::cout <<"Indique el primer dato: "; //Imprimir mensajes
    std::cin >> x;  //El usuario ingrese los datos

    std::cout <<"Indique el segundo dato: ";
    std::cin >> y;

    int resultado_suma = sumar(x,y);
    int resultado_resta = restar(x,y);
    int resultado_multiplicar = multiplicar(x,y);
    double resultado_dividir= dividir(x,y);

    std::cout << "Suma: " << resultado_suma << std::endl;
    std::cout << "Resta: " << resultado_resta << std::endl;
    std::cout << "Multiplicacion: " << resultado_multiplicar << std::endl;
    std::cout << "Dividir: " << resultado_dividir << std::endl;

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}