//
//  Material.h
//  Proyecto 3
//
//  Created by Brenda Silva on 4/20/18.
//  Copyright © 2018 Brenda Silva. All rights reserved.
//

#ifndef Material_h
#define Material_h

#include <iostream>
#include <string.h>
#include <string>

using namespace std;

class Material
{
public:
    //Constructores
    Material();
    Material(int material, string tit);
    
    //Metodos de Acceso para cada atriuto
    int getIdMaterial();
    string getTitulo();
    
    //Metodos de Modificacion para cada atributo
    void setIdMaterial(int Material);
    void setTitulo(string nombre);
    
    //Metodos extra de la clase
    virtual void muestraDatos() = 0;
    virtual int cantidadDiasPrestamo() = 0;
    
protected:
    //Atributos
    int idMaterial;
    string titulo;
};

//Constructores
Material::Material()
{
    idMaterial = 10;
    titulo = "titulo";
}

Material::Material(int material, string tit)
{
    idMaterial = material;
    titulo = tit;
}

//Metodos de Acceso
int Material::getIdMaterial()
{
    return idMaterial;
}

string Material::getTitulo()
{
    return titulo;
}

//Metodos de modificacion
void Material::setIdMaterial(int Material)
{
    idMaterial = Material;
}

void Material::setTitulo(string nombre)
{
    titulo = nombre;
}

#endif /* Material_h */
