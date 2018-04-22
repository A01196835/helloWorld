//
//  Libro.h
//  Proyecto 3
//
//  Created by Brenda Silva on 4/13/18.
//  Copyright © 2018 Brenda Silva. All rights reserved.
//

#ifndef Libro_h
#define Libro_h

#include <iostream>
#include <string>
#include "Material.h"
using namespace std;

class Libro : public Material
{
public:
    //Constructores
    Libro();
    Libro(int Pag, string author, int idMaterial, string titulo);
    
    //Metodos de Acceso
    int getNumPag();
    string getAutor();
    
    //Metodos de Modificacion
    void setNumPag(int Pag);
    void setAutor(string author);
    
    //Metodos extra de la clase
    void muestraDatos();
    int cantidadDiasPrestamo();
    
private:
    //Atributos
    int numPag;
    string Autor;
};

//Constructores
Libro::Libro()
{
    numPag = 0;
    Autor = " hola";
}

Libro::Libro(int Pag, string author, int idMaterial, string titulo) : Material(idMaterial, titulo)
{
    numPag = Pag;
    Autor = author;
}

//Metodos de Acceso
int Libro::getNumPag()
{
    return numPag;
}

string Libro::getAutor()
{
    return Autor;
}

//Metodos de Modificacion
void Libro::setNumPag(int Pag)
{
    numPag = Pag;
}

void Libro::setAutor(string author)
{
    Autor = author;
}

//Metodos de la clase
void Libro::muestraDatos()
{
    cout << "LIBRO -> " << idMaterial << titulo << numPag << Autor << endl;
}

int Libro::cantidadDiasPrestamo()
{
    int Dias = 10;
    return Dias;
}


#endif /* Libro_h */
