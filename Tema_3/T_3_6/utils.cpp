/** 
 * @file utils.cpp
 * @author algarcia
 * 
 * @date 20 de enero de 2016
 */

#include <sstream>   // Para utilizar stringstream
#include "utils.h"
#include "Componente.h"
#include "Computadora.h"
#include "DiscoDuro.h"
#include "PlacaBase.h"

/**
 * @brief Genera una cadena de texto "user-friendly" con los datos de un
 *        componente
 * @param c Referencia al componente a procesar
 * @return Una cadena de texto con la información del componente 
 */
string t36_utils::info ( const Componente& c )
{
   std::stringstream aux;
   
   aux << "Marca: " << c.getMarca () << "\t"
       << "Modelo:" << c.getModelo () << "\t"
       << "S/N: " << c.getNumSerie () << "\t"
       << "Precio: " << c.getPrecio () << " Euros";
   
   return ( aux.str () );
}

/**
 * @brief Método para generar un texto con la información de una computadora
 * @param c Referencia a la computadora a procesar
 * @return Un texto con información de la computadora y cada uno de sus
 *         componentes
 */
string t36_utils::info ( const Computadora& c )
{
   std::stringstream aux;
   int i, nPiezas;

   aux << "- Computadora marca " << c.getMarca ()
       << ", modelo " << c.getModelo () << std::endl
       << "  Comprada el año " << c.getCompradoEn ();

   nPiezas = c.getNPiezas ();

   if ( nPiezas > 0 )
   {
      aux << std::endl
          << "  Compuesta por " << nPiezas
          << " componentes:" << std::endl;

      for ( i = 0; i < nPiezas; i++ )
      {
         aux << "  " << i+1 << ": "
             << info ( c.getPieza (i) ) << std::endl;
      }
   }

   aux << std::endl;

   return ( aux.str () );   
}

/**
 * @brief Método para generar un texto "user-friendly" sobre el disco
 * @return Una cadena de texto con la información del disco
 */
string t36_utils::info ( DiscoDuro& dd )
{
   std::stringstream aux;

   aux << "Disco duro. "
       << info ( dynamic_cast<Componente&> (dd) )
       << std::endl
       << "   Capacidad: " << dd.getCapacidad ()
       << "\tFormato: " << dd.getFormato ();
   
   return ( aux.str () );
}

/**
 * @brief Método para generar un texto "user-friendly" sobre la placa base
 * @return Una cadena de texto con la información de la placa base
 */
string t36_utils::info ( PlacaBase& pb )
{
   std::stringstream aux;

   aux << "Placa base. "
       << info ( dynamic_cast<Componente&> (pb) )
       << std::endl
       << "   Factor de forma: " << pb.getFForma ()
       << "\tNúmero de slots PCIe: " << pb.getNPCIe () << std::endl
       << "   Número de puertos USB: " << pb.getNUSB ()
       << "\tChipset: " << pb.getChipset () << std::endl
       << "   Socket: " << pb.getSocket ();
   
   return ( aux.str () );
}