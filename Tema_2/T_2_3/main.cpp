/** 
 * @brief Fichero principal del ejemplo de teor�a T_2_3
 * @file main.cpp
 * @author Victor M. Rivas (vrivas@ujaen.es)
 * @date 17 de septiembre de 2015, 18:17
 */

#include <iostream>
#include "Gol.h"
using namespace std;

/**
 * @brief Funci�n principal
 * @param argc N�mero de argumentos
 * @param argv Caracteres que forman dichos argumentos
 * @post Crea un objeto de la clase C�rculo e imprimir su di�metro
 */
int main(int argc, char** argv) {
    Gol primerGol( "Alex Cruz", 23 );
    cout << "Ejemplo Teor�a T_2_3"<<endl;
    cout << "El gol fue marcado por "
            << primerGol.GetJugador()
            << " en el minuto "
            << primerGol.GetMinuto() << endl;
    return 0;
}

