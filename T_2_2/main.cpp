/** 
 * @brief Fichero principal del ejemplo de teor�a 2.2
 * @file main.cpp
 * @author Victor M. Rivas (vrivas@ujaen.es)
 * @date 17 de septiembre de 2015, 18:17
 */

#include <cstdlib>
#include <iostream>
#include "CalculadoraIVA.h"
using namespace std;

/**
 * @brief Funci�n principal
 * @param argc N�mero de argumentos
 * @param argv Caracteres que forman dichos argumentos
 * @post Crea un objeto de la clase C�rculo e imprimir su di�metro
 */
int main(int argc, char** argv) {
    CalculadoraIVA calculadora( 21 );
    cout << "El IVA de un producto que cuesta 80 euros es "
            << calculadora.aplicar( 80 )<<endl;
    return 0;
}

