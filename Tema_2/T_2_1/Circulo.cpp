/** 
 * @brief Definici�n de una clase. 
 *        Ejemplo T_2_1, de la Teor�a de Prog. Orientada a Objetos
 *        del curso 2015-2016.
 * @file Circulo.cpp
 * @author vrivas
 * 
 * @date 17 de septiembre de 2015, 18:29
 */

#include "Circulo.h"


// ATENCI�N:
// Esta declaraci�n de la clase se ha simplificado mucho por motivos pedag�gicos.
// Para ver una declaraci�n completa de una clase, mira el ejemplo T_3_3


/**
 * @brief Constructor por defecto
 * @post Crea un nuevo objeto de tipo c�rculo cuyo radio vale 0.0
 */
Circulo::Circulo():
 radio(0.0) {
}

/**
 * @brief Establece un nuevo valor para el radio
 * @param nuevoRadio Nuevo valor para el radio
 * @post Modifica el valor para el radio asignando en nuevo valor pasado por par�metro
 */
void Circulo::SetRadio( double nuevoRadio ) {
    radio=nuevoRadio;
}

/**
 * @brief Devuelve el valor que tiene el radio en ese momento
 * @post Devuelve el valor del radio
 */
double Circulo::GetRadio() {
    return radio;
}

