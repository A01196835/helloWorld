//
//  Reserva.h
//  Proyecto 3
//
//  Created by Brenda Silva on 4/13/18.
//  Copyright © 2018 Brenda Silva. All rights reserved.
//


#ifndef Reserva_h
#define Reserva_h

#include "Fecha.h"
#include "Material.h"

class Reserva
{
public:
    // Constructores
    Reserva();
    Reserva(int Material, int Cliente, Fecha FechaReservacion);
    
    //Metodos de Acceso
    int getMaterial();
    int getCliente();
    Fecha getFechaReservacion();
    
    //Metodos de Modificacion
    void setMaterial(int material);
    void setCliente(int cliente);
    void setFechaReservacion(Fecha fecha1);
    
    //Metodo extra de la clase
    Fecha calculaFechaSinReservacion(int Dias);
    
private:
    //Atributos
    int idMaterial;
    int idCliente;
    Fecha fechaReservacion;
    
};

//Constructores
Reserva::Reserva()
{
    idMaterial = 0;
    idCliente = 0;
    Fecha f1(1, 04, 2018);
    fechaReservacion = f1;
}

Reserva::Reserva(int Material, int Cliente, Fecha FechaReservacion)
{
    idMaterial = Material;
    idCliente = Cliente;
    fechaReservacion = FechaReservacion;
}

//Metodos de Acceso
int Reserva::getMaterial()
{
    return idMaterial;
}

int Reserva::getCliente()
{
    return idCliente;
}

Fecha Reserva::getFechaReservacion()
{
    return fechaReservacion;
}

//Metodos de Modficacion
void Reserva::setMaterial(int material)
{
    idMaterial = material;
}

void Reserva::setCliente(int cliente)
{
    idCliente = cliente;
}

void Reserva::setFechaReservacion(Fecha fecha1)
{
    fechaReservacion = fecha1;
}

//Metodos extra de la clase
Fecha Reserva::calculaFechaSinReservacion(int Dias)
{
    Fecha f1(20, 04, 2018);
    f1.operator+(Dias);
    return f1;
}


#endif /* Reserva_h */
