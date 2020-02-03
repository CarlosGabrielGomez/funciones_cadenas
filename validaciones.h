#ifndef VALIDACIONES_H_INCLUDED
#define VALIDACIONES_H_INCLUDED
////#############################################################################
// ARCHIVO : validaciones.h
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
// Verifica el ingreso de datos
//
/////////////////////////////////////////////////////////////////////////////////


using namespace std;
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : val_min (cadena de caracteres)
// ACCION :  valida que los valores ASCII esten dentro del rango de 97 a 122
// PARAMETROS: char cad1
// DEVUELVE : booleano
//-----------------------------------------------------------------------------

bool val_min(char *cad1)/* valida letra en minuscula*/

{
    int x=0;
    bool valor=true;
    while(cad1[x]!='\0')
    {
      if (cad1[x]<97||cad1[x]>122)
      {
         valor=false;
      }
       x++;
    }

return valor;

}

//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : val_max (cadena de caracteres)
// ACCION :  valida que los valores ASCII esten dentro del rango de 65 a 90
// PARAMETROS: char cad1
// DEVUELVE : booleano
//-----------------------------------------------------------------------------

bool val_max(char *cad1)/* valida letra en mayuscula*/

{
    int y=0;
    bool valor=true;
    while(cad1[y]!='\0')
    {
      if (cad1[y]<65||cad1[y]>90)
      {
         valor=false;
      }
      y++;
    }

return valor;
}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : val_num (cadena de caracteres)
// ACCION :  valida que los valores ASCII esten dentro del rango de 48 a 57
// PARAMETROS: char cad1
// DEVUELVE : numero entero
//-----------------------------------------------------------------------------
bool val_num(char *cad1)/* valida numero entre 0 y 9*/
{
    int x=0;
    bool valor=true;
    while(cad1[x]!='\0')
    {
      if (cad1[x]<48||cad1[x]>57)
      {
         valor=false;
      }
      x++;
    }
return valor;
}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : salir (variable booleana)
// ACCION : recibe por parametro la direccion de la variable booleana y cambia
// su valor por puntero
// PARAMETROS: bool entrar
// DEVUELVE : nada
//-----------------------------------------------------------------------------

void salir(bool &entrar)
{
  bool *confirmar=&entrar;
  *confirmar=false;
   sys::cls();
}
#endif // VALIDACIONES_H_INCLUDED
