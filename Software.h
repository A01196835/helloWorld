//
//  Software.h
//  Proyecto 3
//
//  Created by Brenda Silva on 4/13/18.
//  Copyright © 2018 Brenda Silva. All rights reserved.
//

#ifndef Software_h
#define Software_h

#include <iostream>
#include "Material.h"
#include <string>
using namespace std;

class Software : public Material
{
public:
    //Constructores
    Software();
    Software(string Sistema, int idMaterial, string titulo);
    
    //Metodos de Acceso
    string getSoftware();
    
    //Metodos de Modificacion
    void setSoftware(string Sistema);
    
    //Metodos extra de la clase
    void muestraDatos();
    int cantidadDiasPrestamo();
    
private:
    //Atributos
    string sistemaOper;
};

//Constructores
Software::Software()
{
    sistemaOper = "Hola";
}

Software::Software(string Sistema, int idMaterial, string titulo) : Material(idMaterial, titulo)
{
    sistemaOper = Sistema;
}

//Metodos de Acceso
string Software::getSoftware()
{
    return sistemaOper;
}

//Metodos de Modidicacion
void Software::setSoftware(string Sistema)
{
    sistemaOper = Sistema;
}

//Metodos de la clase
void Software::muestraDatos()
{
    cout << "SOFTWARE ->" << idMaterial << titulo << sistemaOper << endl;
}

int Software::cantidadDiasPrestamo()
{
    int Dias = 1;
    return Dias;
}

#endif /* Software_h */
