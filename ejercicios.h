#ifndef EJERCICIOS_H_INCLUDED
#define EJERCICIOS_H_INCLUDED
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
// FUNCION : ejer_strLen(cadena de caracteres,tamaño de la cadena )
// ACCION : pide el ingreso de valores al usuario y ejecuta una funcion de cadenas
// PARAMETROS: char cad1, int tam
// DEVUELVE : nada
//-----------------------------------------------------------------------------

void ejer_strLen(char *cad1,int tam)
{
    encab_strLen();
    int b;/**/
    pedir();/**/
    sys::getline(cad1,tam);
    b=strLen(cad1);/**/
    cout<<b;
    system("pause>null");
    sys::cls();
}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : ejer_strCpy( 2 cadensa de caracteres,tamaño de la cadena )
// ACCION : pide el ingreso de valores al usuario y ejecuta una funcion de cadenas
// PARAMETROS: char cad1, char cad2, int tam
// DEVUELVE : nada
//-----------------------------------------------------------------------------

void ejer_strCpy(char *cad1,char *cad2,int tam)
{
    encab_strCpy();
    pedir();/**/
    sys::getline(cad1,tam);
    strCpy(cad1,cad2);
    cout<<cad1;
    system("pause>null");
    sys::cls();

}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : ejer_strCat( 2 cadenas de caracteres,tamaño de la cadena )
// ACCION : pide el ingreso de valores al usuario y ejecuta una funcion de cadenas
// PARAMETROS: char cad1,char cad2, int tam
// DEVUELVE : nada
//-----------------------------------------------------------------------------

void ejer_strCat(char *cad1,char *cad2,int tam)
{
    encab_strCat();
    pedir();/**/
    sys::getline(cad1,tam);
    pedir();/**/
    //cin.ignore();//esto genera un error en la funciomn
    sys::getline(cad2,tam);
    strCat(cad1,cad2);
    cout<<cad1;
    system("pause>null");
    sys::cls();
}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : ejer_strCmp(2 cadenas de caracteres,tamaño de la cadena )
// ACCION : pide el ingreso de valores al usuario y ejecuta una funcion de cadenas
// PARAMETROS: char cad1, int tam
// DEVUELVE : nada
//-----------------------------------------------------------------------------

void ejer_strCmp(char *cad1,char *cad2,int tam)
{
    encab_strCmp();
    pedir();
    sys::getline(cad1,tam);
    pedir();
    //cin.ignore();//esto genera un error en la funciomn
    sys::getline(cad2,tam);
    int a=strCmp(cad1,cad2);
    cout<<"valor:"<<a;
    system("pause>null");
    sys::cls();

}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : ejer_strFind(cadena de caracteres,tamaño de la cadena )
// ACCION : pide el ingreso de valores al usuario y ejecuta una funcion de cadenas
// PARAMETROS: char cad1, int tam
// DEVUELVE : nada
//-----------------------------------------------------------------------------

void ejer_strFind(char *cad1,int tam)
{
    encab_strFind();
    int pos_letra;
    int tam_letra=2;
    char letra[tam_letra];/*letra[0], caracter, letra[1], '\0' */
    pedir();
    sys::getline(cad1,tam);
    pedirletra();
    sys::getline(letra,tam_letra);
    pos_letra=strFind(cad1,letra);
    cout<<pos_letra;/*le aumenta uno para adpatarnos
    al usuario*/
    system("pause>null");
    sys::cls();


}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : ejer_strCnt(cadena de caracteres,tamaño de la cadena )
// ACCION : pide el ingreso de valores al usuario y ejecuta una funcion de cadenas
// PARAMETROS: char cad1, int tam
// DEVUELVE : nada
//-----------------------------------------------------------------------------

void  ejer_strCnt(char *cad1,int tam)
{
    encab_strCnt();
    int cant_letra;/*guarda la cant. de veces que
    aparece la letra en la cadenaa;*/
    int tam_letra=2;
    char letra[tam_letra];/*letra[0], caracter, letra[1], '\0' */
    pedir();
    sys::getline(cad1,tam);
    pedirletra();
    sys::getline(letra,tam_letra);
    cant_letra=strCnt(cad1,letra);
    cout<<cant_letra;
    system("pause>null");
    sys::cls();
}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : ejer_strInv(cadena de caracteres,tamaño de la cadena )
// ACCION : pide el ingreso de valores al usuario y ejecuta una funcion de cadenas
// PARAMETROS: char cad1, int tam
// DEVUELVE : nada
//-----------------------------------------------------------------------------


void ejer_strInv(char *cad1,int tam)
{
    encab_strFind();
    pedir();
    sys::getline(cad1,tam);
    strInv(cad1);
    cout<<cad1;//salida por pantalla
    system("pause>null");
    sys::cls();
}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : ejer_strRpl(cadena de caracteres,tamaño de la cadena )
// ACCION : pide el ingreso de valores al usuario y ejecuta una funcion de cadenas
// PARAMETROS: char cad1, int tam
// DEVUELVE : nada
//-----------------------------------------------------------------------------

void  ejer_strRpl(char *cad1,int tam)
{
    encab_strRpl();
    int tam_letra=2;
    char letra[tam_letra];/*letra[0], caracter, letra[1], '\0' */
    int pos;
    pedir();
    sys::getline(cad1,tam);
//    mostpos(cad1,tam);
    pedirletra();
    sys::getline(letra,tam_letra);
    pedirpos();
    cin>>pos;
    cin.ignore();
    strRpl(cad1,letra,pos);
    cout<<cad1;
    system("pause>null");
    sys::cls();

}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : ejer_strTrunc(cadena de caracteres,tamaño de la cadena )
// ACCION : pide el ingreso de valores al usuario y ejecuta una funcion de cadenas
// PARAMETROS: char cad1, int tam
// DEVUELVE : nada
//-----------------------------------------------------------------------------

void ejer_strTrunc(char *cad1,int tam)
{
    encab_strTrunc();
    int pos;
    pedir();
    sys::getline(cad1,tam);
//    mostpos(cad1,tam);
    pedirpos();
    cin>>pos;
    cin.ignore();
    strTrunc(cad1,pos);
    cout<<cad1;
    system("pause>null");
    sys::cls();
}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : ejer_strSub(cadena de caracteres,tamaño de la cadena )
// ACCION : pide el ingreso de valores al usuario y ejecuta una funcion de cadenas
// PARAMETROS: char cad1, int tam
// DEVUELVE : nada
//-----------------------------------------------------------------------------

void  ejer_strSub(char *cad1,char *cad2,int tam)
{
    encab_strSub();
    pedir();
    sys::getline(cad1,tam);
    pedir();
    //cin.ignore();//esto genera un error en la funciomn
    sys::getline(cad2,tam);
    int a;
    a=strSub(cad1,cad2);
//    mostpos(cad1,tam);
//    mostpos(cad2,tam);
    cout<<"La subcadena empieza en la posicion Nº: "<<a;
    system("pause>null");
    sys::cls();


}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : ejer_strToUpper(cadena de caracteres,tamaño de la cadena )
// ACCION : pide el ingreso de valores al usuario y ejecuta una funcion de cadenas
// PARAMETROS: char cad1, int tam
// DEVUELVE : nada
//-----------------------------------------------------------------------------

void ejer_strToUpper(char *cad1,int tam)
{
    encab_strToUpper();
    pedir();
    sys::getline(cad1,tam);
    while(bool x=val_min(cad1)!=true)
    {
      pedir_cad_min();
      sys::getline(cad1,tam);
      x=val_min(cad1);
    }
    strToUpper(cad1);
    cout<<cad1;
    system("pause>null");
    sys::cls();

}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : ejer_strToLower(cadena de caracteres,tamaño de la cadena )
// ACCION : pide el ingreso de valores al usuario y ejecuta una funcion de cadenas
// PARAMETROS: char cad1, int tam
// DEVUELVE : nada
//-----------------------------------------------------------------------------

void ejer_strToLower(char *cad1,int tam)
{
    encab_strToLower();
    pedir();
    sys::getline(cad1,tam);
    while(bool y=val_max(cad1)!=true)
    {
        pedir_cad_may();
        sys::getline(cad1,tam);
        y=val_max(cad1);
    }
    strToLower(cad1);
    cout<<cad1;
    system("pause>null");
    sys::cls();


}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : ejer_strToInt(cadena de caracteres,tamaño de la cadena )
// ACCION : pide el ingreso de valores al usuario y ejecuta una funcion de cadenas
// PARAMETROS: char cad1, int tam
// DEVUELVE : nada
//-----------------------------------------------------------------------------

void ejer_strToInt(char *cad1,int tam)
{
    encab_strToInt();
    int a;
    pedir();
    sys::getline(cad1,tam);
    while(bool x=val_num(cad1)!=true)
    {
      pedir();
      sys::getline(cad1,tam);
      x=val_max(cad1);
    }
    a=strToInt(cad1);
    cout<<a;
    system("pause>null");
    sys::cls();

}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : ejer_intToStr(cadena de caracteres,tamaño de la cadena )
// ACCION : pide el ingreso de valores al usuario y ejecuta una funcion de cadenas
// PARAMETROS: char cad1, int tam
// DEVUELVE : nada
//-----------------------------------------------------------------------------

void ejer_intToStr(char *cad1,int tam)

{
    encab_intToStr();
    int numero;
    pedirnum();
    cin>>numero;
    cin.ignore();
    intToStr(cad1,numero);
//    mostpos(cad1,tam);
     cout<<cad1;
    system("pause>null");
    sys::cls();
}
#endif // EJERCICIOS_H_INCLUDED
