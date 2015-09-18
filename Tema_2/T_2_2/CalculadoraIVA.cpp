/**
 * @brief  Definici�n de una clase. 
 *        Ejemplo T_2_2, de la Teor�a de Prog. Orientada a Objetos
 *        del curso 2015-2016.
 * @file CalculadoraIVA.cpp
 * @author Victor M. Rivas Santos <vrivas@ujaen.es>
 *
 * @date 18 de septiembre de 2015, 11:36
 */



// ATENCI�N:
// Esta declaraci�n de la clase se ha simplificado mucho por motivos pedag�gicos.
// Para ver una declaraci�n completa de una clase, mira el ejemplo T_3_3


#include "CalculadoraIVA.h"

/**
 * @brief Constructor de clase
 * @brief unPorcentaje Valor para inicializar el porcentaje
 */
CalculadoraIVA::CalculadoraIVA(double unPorcentaje) :
porcentaje(unPorcentaje) {
}

/**
 * 
 * @param precio Precio al que queremos aplicar el IVA
 * @post Devuelve el valor correspondiente a aplicar el Iva a ese precio
 */
double CalculadoraIVA::aplicar(double precio) {
    return precio*porcentaje/100;
}


