//
//  Disco.h
//  Proyecto 3
//
//  Created by Brenda Silva on 4/13/18.
//  Copyright © 2018 Brenda Silva. All rights reserved.
//

#ifndef Disco_h
#define Disco_h

#include <iostream>
#include <string>
#include "Material.h"
using namespace std;

class Disco : public Material
{
public:
    //Constructores
    Disco();
    Disco(int Duration, int idMaterial, string titulo);
    
    //Metodos de Acceso
    int getDuracion();
    
    //Metodos de Modificacion
    void setDuracion(int Duration);
    
    //Metodos extra de la clase
    void muestraDatos();
    int cantidadDiasPrestamo();
    
private:
    //Atributos
    int duracion;
};

//Constructores
Disco::Disco()
{
    duracion = 10;
}

Disco::Disco(int Duration, int idMaterial, string titulo) : Material(idMaterial, titulo)
{
    duracion = Duration;
}

//Metodos de Acceso
int Disco::getDuracion()
{
    return duracion;
}

//Metodos de Modificacion
void Disco::setDuracion(int Duration)
{
    duracion = Duration;
}

//Metodos extra de la clase
void Disco::muestraDatos()
{
    cout << "DISCO -> "<< idMaterial << titulo << duracion << endl;
}

int Disco::cantidadDiasPrestamo()
{
    int Dias = 3;
    return Dias;
}

#endif /* Disco_h */
