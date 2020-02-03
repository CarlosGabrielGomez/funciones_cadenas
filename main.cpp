//#############################################################################
// ARCHIVO             : nombre de archivo.extension
// AUTOR/ES            : nombre/s de autor/es
// VERSION             : 0.01 beta.
// FECHA DE CREACION   : dd/mm/aaaa.
// ULTIMA ACTUALIZACION: dd/mm/aaaa.
// LICENCIA            : GPL (General Public License) - Version 3.
//
//  **************************************************************************
//  * El software libre no es una cuestion economica sino una cuestion etica *
//  **************************************************************************
//
// Este programa es software libre;  puede redistribuirlo  o  modificarlo bajo
// los terminos de la Licencia Publica General de GNU  tal como se publica por
// la  Free Software Foundation;  ya sea la version 3 de la Licencia,  o (a su
// eleccion) cualquier version posterior.
//
// Este programa se distribuye con la esperanza  de que le sea util,  pero SIN
// NINGUNA  GARANTIA;  sin  incluso  la garantia implicita de MERCANTILIDAD  o
// IDONEIDAD PARA UN PROPOSITO PARTICULAR.
//
// Vea la Licencia Publica General GNU para mas detalles.
//
// Deberia haber recibido una copia de la Licencia Publica General de GNU junto
// con este proyecto, si no es asi, escriba a la Free Software Foundation, Inc,
// 59 Temple Place - Suite 330, Boston, MA 02111-1307, EE.UU.

//=============================================================================
// SISTEMA OPERATIVO   : Linux (Ubuntu) / Windows XP / Windows 7.
// IDE                 : Code::Blocks - 8.02 / 10.05
// COMPILADOR          : GNU GCC Compiler (Linux) / MinGW (Windows).
// LICENCIA            : GPL (General Public License) - Version 3.
//=============================================================================
// DESCRIPCION:
//              Breve explicacion sobre el contenido del archivo.
//
////////////////////////////////////////////////////////////////////////////////

//*****************************************************************************
//                       CONFIGURACION MULTIPLATAFORMA
//=============================================================================
// COMPILACION EN WINDOWS
//-----------------------------------------------------------------------------
// Si este programa se va a compilar en Windows, descomente las tres lineas
// siguientes, y comente las tres lineas de "COMPILACION EN LINUX".
//-----------------------------------------------------------------------------
#ifndef _WIN32
  # define _WIN32
#endif

//=============================================================================
// COMPILACION EN LINUX
//-----------------------------------------------------------------------------
// Si este programa se va a compilar en Linux, descomente las tres lineas
// siguientes, y comente las tres lineas de "COMPILACION EN WINDOWS".
//-----------------------------------------------------------------------------
//#ifndef _LINUX
//  # define _LINUX
//#endif

//*****************************************************************************
//                             INCLUSIONES ESTANDAR
//=============================================================================
#include <iostream> // Libreria de flujos de  Entrada/Salida  que contiene  los
                    // objetos cin, cout y endl.

#include <cstdlib>  // Libreria estandar que contiene la funcion exit().

//*****************************************************************************
//                             INCLUSIONES PERSONALES
//=============================================================================
#include "CSYSTEM/csystem.h" // Libreria para multiplataforma.
#include"validaciones.h"//archivo con funciones de validacion
#include"presentaciones.h"//archivo con presentaciones por pantalla;
#include"funcionesmenu.h"//archivo con la funcion cadenas
#include "ejercicios.h"//archivo
//==============================================================================
// DECLARACION DEL ESPACIO DE NOMBRES POR DEFECTO
//------------------------------------------------------------------------------
using namespace std;
//==============================================================================
// FUNCION PRINCIPAL - PUNTO DE INICIO DEL PROYECTO
//------------------------------------------------------------------------------
int main()

{
    bool entrar=true;//variable de tipo booleana para salir del menú;
//    int tam_i=3;/* tamaño de la cadena ingreso*/
//    char ingreso[tam_i];/*cadena de un solo caracter */
    int opcion;//variable de tipo entero que evalúa SWITCH;
    int tam=50;//variable entera para asignar tamaño del array;
    char cadena_1[tam];
    char cadena_2[tam];
    while(entrar==true)
    {
        presentacion();
        cin>>opcion;
        cin.ignore();
        sys::cls();
        switch(opcion)
        {
        case 1:
        {
            ejer_strLen(cadena_1,tam);
        }
        break;
        case 2:
        {
            ejer_strCpy(cadena_1,cadena_2,tam);
        }
        break;
        case 3:
        {
            ejer_strCat(cadena_1,cadena_2,tam);
        }
        break;
        case 4:
        {
            ejer_strCmp(cadena_1,cadena_2,tam);
        }
        break;
        case 5:
        {
            ejer_strFind(cadena_1,tam);
        }
        break;
        case 6:
        {
            ejer_strCnt(cadena_1,tam);
        }
        break;
        case 7:
        {
            ejer_strInv(cadena_1,tam);
        }
        break;
        case 8:
        {
            ejer_strRpl(cadena_1,tam);
        }
        break;
        case 9:
        {
            ejer_strTrunc(cadena_1,tam);
        }
        break;
        case 10:
        {
            ejer_strSub(cadena_1,cadena_2,tam);
        }
        break;
        case 11:
        {
            ejer_strToUpper(cadena_1,tam);
        }
        break;
        case 12:
        {
            ejer_strToLower(cadena_1,tam);
        }
        break;
        case 13:
        {
            ejer_strToInt(cadena_1,tam);
        }
        break;

        case 14:
        {
            ejer_intToStr(cadena_1,tam);
        }
        break;
        case 15:
        {
            salir(entrar);

        } break;
        default:
        {
          repetir();
        } break;

        }
    }
    //--------------------------------------------------------------------------
    // FIN DE LA FUNCION main() SIN ERRORES.
    //--------------------------------------------------------------------------
    return 0;
}
//=============================================================================
//                            FIN DE ARCHIVO
//#############################################################################

