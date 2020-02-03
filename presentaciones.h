#ifndef PRESENTACIONES_H_INCLUDED
#define PRESENTACIONES_H_INCLUDED
////#############################################################################
// ARCHIVO : ejercicios.h
// AUTOR : Gomez Carlos Gabriel
// FECHA DE CREACION : 20/05/2017.
// ULTIMA ACTUALIZACION: 20/05/2017.
// LICENCIA : GPL (General Public License) - Version 3.
//=============================================================================
// SISTEMA OPERATIVO : Linux (Ubuntu) / Windows XP / Windows 7.
// IDE : Code::Blocks - 8.02 / 10.05
// COMPILADOR : GNU GCC Compiler (Linux) / MinGW (Windows).
// LICENCIA : GPL (General Public License) - Version 3.
//=============================================================================
// DESCRIPCION:
// Recibe los parametros y ejecuta las funciones de cadenas
//
/////////////////////////////////////////////////////////////////////////////////


using namespace std;
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : repetir (ninguno )
// ACCION : pide ingreso una opcion del menu
// PARAMETROS:ninguno
// DEVUELVE : nada
//-----------------------------------------------------------------------------
void repetir()
{
    cout<<"Ingrese una de las opciones: ";
}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : pedir (ninguno )
// ACCION : pide ingreso una caena
// PARAMETROS:ninguno
// DEVUELVE : nada
//-----------------------------------------------------------------------------
void pedir()
{
    cout<<"INGRESE SU TEXTO"<<endl;

}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : pedirletra (ninguno )
// ACCION : pide ingreso una letra
// PARAMETROS:ninguno
// DEVUELVE : nada
//-----------------------------------------------------------------------------
void pedirletra()
{
    cout<<"ingrese una letra: ";


}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : pedirpos (ninguno )
// ACCION : pide ingreso una posicion de la cadena
// PARAMETROS:ninguno
// DEVUELVE : nada
//-----------------------------------------------------------------------------
void pedirpos()
{

    cout<<"ingrese la posicion: ";
}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : pedirnum (ninguno )
// ACCION : pide ingreso de un numero entero
// PARAMETROS:ninguno
// DEVUELVE : nada
//-----------------------------------------------------------------------------
void pedirnum()
{
    cout<<"ingrese un numero entero: ";
}

//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : pedir_cad_min (ninguno )
// ACCION : pide ingreso una cadena en minuscula
// PARAMETROS:ninguno
// DEVUELVE : nada
//-----------------------------------------------------------------------------
void pedir_cad_min()
{
    cout<<"ingrese una cadena en minuscula"<<endl;
}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION :  pedir_cad_may(ninguno )
// ACCION : pide ingreso una cadena en mayuscula
// PARAMETROS:ninguno
// DEVUELVE : nada
//-----------------------------------------------------------------------------

void pedir_cad_may()
{
    cout<<"ingrese una cadena en mayuscula"<<endl;

}

//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION :mostpos (ninguno )
// ACCION : saca por pantalla la posicion de cada elemento de la cadena
// PARAMETROS:ninguno
// DEVUELVE : nada
//-----------------------------------------------------------------------------
// void mostpos(char *cad1,int tam)
// {
//     int x=0;//
//           cout<<"LETRAS"<<endl;
//          while(cad1[x]!='\0')
//          {
//              cout<<cad1[x]<<"\t";
//              x++;
//            }
//            int y=0;
//            cout<<endl;
//
//    while(cad1[y]!='\0')
//    {
//        cout<<y+1<<"\t";
//        y++;
//
//    }
//    cout<<endl;
// }

//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : presentacion (ninguno )
// ACCION : muestra por pantalla el menu principal
// PARAMETROS:ninguno
// DEVUELVE : nada
//-----------------------------------------------------------------------------

void presentacion()
{

    cout<<endl;
    cout<<"\t"<<"**********************************************"<<endl;
    cout<<"\t"<<"*****************ELIJA SU OPCION**************"<<endl;
    cout<<"\t"<<"**********************************************"<<endl;
    cout<<"\t"<<"*        OPCION 1...............strLen       *"<<endl;
    cout<<"\t"<<"*        OPCION 2...............strCpy       *"<<endl;
    cout<<"\t"<<"*        OPCION 3...............strCat       *"<<endl;
    cout<<"\t"<<"*        OPCION 4...............strCmp       *"<<endl;
    cout<<"\t"<<"*        OPCION 5...............strFind      *"<<endl;
    cout<<"\t"<<"*        OPCION 6...............strCnt       *"<<endl;
    cout<<"\t"<<"*        OPCION 7...............strInv       *"<<endl;
    cout<<"\t"<<"*        OPCION 8...............strRpl       *"<<endl;
    cout<<"\t"<<"*        OPCION 9...............strTrunc     *"<<endl;
    cout<<"\t"<<"*        OPCION 10..............strSub       *"<<endl;
    cout<<"\t"<<"*        OPCION 11..............strToUpper   *"<<endl;
    cout<<"\t"<<"*        OPCION 12..............strToLower   *"<<endl;
    cout<<"\t"<<"*        OPCION 13..............strToInt     *"<<endl;
    cout<<"\t"<<"*        OPCION 14..............intToStr     *"<<endl;
    cout<<"\t"<<"*        OPCION 15..............SALIR        *"<<endl;
    cout<<"\t"<<"**********************************************"<<endl;
}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : encab_ strLen(ninguno )
// ACCION : muestra por pantalla el encabezado de la funcion strLen
// PARAMETROS:ninguno
// DEVUELVE : nada
//-----------------------------------------------------------------------------
void encab_strLen()
{
cout<<endl;
cout<<"**************************************************************************"<<endl;
cout<<"*                              strLen                                    *"<<endl;
cout<<"*    Accion: cuenta la cantidad de caracteres que integran una cadena.   *"<<endl;
cout<<"*    Parametros: cadena de caracteres.                                   *"<<endl;
cout<<"*    Devuelve: un numero entero que representa la cantidad de caracteres *"<<endl;
cout<<"**************************************************************************"<<endl;

}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : encab_strCpy (ninguno )
// ACCION : muestra por pantalla el encabezado de la funcion strCpy
// PARAMETROS:ninguno
// DEVUELVE : nada
//-----------------------------------------------------------------------------
void encab_strCpy()
{
cout<<"***************************************************"<<endl;
cout<<"*                    strCpy                       *" <<endl;
cout<<"*    Accion: copia una cadena en otra.            *"<<endl;
cout<<"*    Parametros: cadena destino, cadena fuente.   *"<<endl;
cout<<"*    Devuelve: nada.                              *"<<endl;
cout<<"***************************************************"<<endl;
}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : encab_strCat (ninguno )
// ACCION : muestra por pantalla el encabezado de la funcion strCat
// PARAMETROS:ninguno
// DEVUELVE : nada
//-----------------------------------------------------------------------------
void encab_strCat()
{
cout<<"*****************************************************"<<endl;
cout<<"*                      strCat                       *"<<endl;
cout<<"*    Accion: Une dos cadenas en una sola            *"<<endl;
cout<<"*    Parametros: cadena inicial, cadena final.      *"<<endl;
cout<<"*    Devuelve: nada                                 *"<<endl;
cout<<"*****************************************************"<<endl;

}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : encab_strCmp (ninguno )
// ACCION : muestra por pantalla el encabezado de la funcion strCmp
// PARAMETROS:ninguno
// DEVUELVE : nada
//-----------------------------------------------------------------------------
void encab_strCmp()
{
cout<<"*****************************************************"<<endl;
cout<<"*                         strCmp                    *"<<endl;
cout<<"*    Accion: compara dos cadenas.                   *"<<endl;
cout<<"*    Parametros: cadena 1, cadena 2.                *"<<endl;
cout<<"*    Devuelve:                                      *"<<endl;
cout<<"*    Un 0 si son iguales.                           *"<<endl;
cout<<"*    Un 1 si la primera es mayor que la segunda.    *"<<endl;
cout<<"*    Un -1 si la segunda es mayor que la primera    *"<<endl;
cout<<"*****************************************************"<<endl;
}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : encab_strFind (ninguno )
// ACCION : muestra por pantalla el encabezado de la funcion strFind
// PARAMETROS:ninguno
// DEVUELVE : nada
//-----------------------------------------------------------------------------
void encab_strFind()
{
cout<<"**********************************************************"<<endl;
cout<<"*                        strFind                         *"<<endl;
cout<<"*    Accion: busca un caracter dentro de una cadena.     *"<<endl;
cout<<"*    Parametros: cadena, caracter.                       *"<<endl;
cout<<"*    Devuelve:                                           *"<<endl;
cout<<"*    La posicion donde se produce la primera ocurrencia. *"<<endl;
cout<<"*    Un numero negativo si no lo encuentra.              *"<<endl;
cout<<"**********************************************************"<<endl;
}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : encab_strCnt(ninguno )
// ACCION : muestra por pantalla el encabezado de la funcion strCnt
// PARAMETROS:ninguno
// DEVUELVE : nada
//-----------------------------------------------------------------------------
void encab_strCnt()
{
cout<<"**********************************************************"<<endl;
cout<<"*                        strCnt                          *"<<endl;
cout<<"*    Accion: cuenta las  veces que aparece un caracter   *"<<endl;
cout<<"*    Parametros: cadena, carccter.                       *"<<endl;
cout<<"*    Devuelve: cantidad de coincidencias                 *"<<endl;
cout<<"**********************************************************"<<endl;


}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : encab_ strInv (ninguno )
// ACCION : muestra por pantalla el encabezado de la funcion strInv
// PARAMETROS:ninguno
// DEVUELVE : nada
//-----------------------------------------------------------------------------
void encab_strInv()
{
cout<<"******************************************************"<<endl;
cout<<"*                    strInv                          *"<<endl;
cout<<"*    Accion: invierte los caracteres de una cadena.  *"<<endl;
cout<<"*    Parametros: cadena                              *"<<endl;
cout<<"*    Devuelve: nada.                                 *"<<endl;
cout<<"******************************************************"<<endl;


}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : encab_ strRpl(ninguno )
// ACCION : muestra por pantalla el encabezado de la funcion strRpl
// PARAMETROS:ninguno
// DEVUELVE : nada
//-----------------------------------------------------------------------------
void encab_strRpl()
{
cout<<"**********************************************************"<<endl;
cout<<"                         strRpl                          *"<<endl;
cout<<"     Accion: reemplaza el caracter de una posicion dada  *"<<endl;
cout<<"     Parametros: cadena, nuevo caracter, posicion        *"<<endl;
cout<<"     Devuelve: nada                                      *"<<endl;
cout<<"**********************************************************"<<endl;


}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : encab_ strTrunc (ninguno )
// ACCION : muestra por pantalla el encabezado de la funcion strTrunc
// PARAMETROS:ninguno
// DEVUELVE : nada
//-----------------------------------------------------------------------------
void encab_strTrunc()
{
cout<<"*****************************************************"<<endl;
cout<<"*                    strTrunc                        *"<<endl;
cout<<"*    Accion: trunca una cadena en una posicion dada. *"<<endl;
cout<<"*    Parametros: cadena, posicion.                   *"<<endl;
cout<<"*    Devuelve: nada.                                 *"<<endl;
cout<<"******************************************************"<<endl;
}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : encab_strSub(ninguno )
// ACCION : muestra por pantalla el encabezado de la funcion  strSub
// PARAMETROS:ninguno
// DEVUELVE : nada
//-----------------------------------------------------------------------------
void encab_strSub()
{
cout<<"**********************************************************"<<endl;
cout<<"*                    strSub                              *"<<endl;
cout<<"*    Accion: busca una subcadena dentro de una cadena    *"<<endl;
cout<<"*    Parametros: cadena, subcadena.                      *"<<endl;
cout<<"*    Devuelve:                                           *"<<endl;
cout<<"*    La posicion inicial de la subcadena.                *"<<endl;
cout<<"*    Un numero negativo si no se encuentra.              *"<<endl;
cout<<"**********************************************************"<<endl;

}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : encab_strToUpper (ninguno )
// ACCION : muestra por pantalla el encabezado de la funcion strToUpper
// PARAMETROS:ninguno
// DEVUELVE : nada
//-----------------------------------------------------------------------------
void encab_strToUpper()
{
cout<<"******************************************************"<<endl;
cout<<"*                strToUpper                          *"<<endl;
cout<<"*    Accion: convierte una cadena a mayusculas.      *"<<endl;
cout<<"*    Parametros: cadena.                             *"<<endl;
cout<<"*    Devuelve: nada.                                 *"<<endl;
cout<<"******************************************************"<<endl;


}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : encab_ strToLower (ninguno )
// ACCION : muestra por pantalla el encabezado de la funcion strToLower
// PARAMETROS:ninguno
// DEVUELVE : nada
//-----------------------------------------------------------------------------
void encab_strToLower()
{

cout<<"******************************************************"<<endl;
cout<<"*                     strToLower                     *"<<endl;
cout<<"*    Accion: convierte una cadena a minusculas.      *"<<endl;
cout<<"*    Parametros: cadena.                             *"<<endl;
cout<<"*    Devuelve: nada.                                 *"<<endl;
cout<<"******************************************************"<<endl;

}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : encab_ strToInt (ninguno )
// ACCION : muestra por pantalla el encabezado de la funcion strToInt
// PARAMETROS:ninguno
// DEVUELVE : nada
//-----------------------------------------------------------------------------
void encab_strToInt()
{
cout<<"*******************************************************"<<endl;
cout<<"                 strToInt                             *"<<endl;
cout<<"*    Accion: convierte una cadena  a un numero entero *"<<endl;
cout<<"*    Parametros: cadena                               *"<<endl;
cout<<"*    Devuelve: el numero entero.                      *"<<endl;
cout<<"*******************************************************"<<endl;

}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : encab_intToStr (ninguno )
// ACCION : muestra por pantalla el encabezado de la funcion intToStr
// PARAMETROS:ninguno
// DEVUELVE : nada
//-----------------------------------------------------------------------------
void encab_intToStr()
{
cout<<"*****************************************************"<<endl;
cout<<"*                    intToStr                       *"<<endl;
cout<<"*    Accion: convierte un numero entero a cadena.   *"<<endl;
cout<<"*    Parametros: numero, cadena                     *"<<endl;
cout<<"*    Devuelve: nada.                                *"<<endl;
cout<<"*****************************************************"<<endl;
}
#endif // PRESENTACIONES_H_INCLUDED
