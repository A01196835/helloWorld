//
//  Fecha.h
//  Proyecto 3
//
//  Created by Brenda Silva on 4/13/18.
//  Copyright © 2018 Brenda Silva. All rights reserved.
//

#include <string.h>
using namespace std;

#ifndef Fecha_h
#define Fecha_h

class Fecha
{
public:
    //Constructores
    Fecha();
    Fecha(int DD, int MM, int AA);
    
    //Metodos de Acceso
    int getDD();
    int getMM();
    int getAA();
    
    //Metodos de Modificacion
    void setFecha(int DD, int MM, int AA);
    
    //Metodos de la clase de operador
    Fecha operator+ (int dias);
    Fecha operator>= (int );
    Fecha operator<= (int );
    Fecha operator> (int );
    Fecha operator< (int );
    Fecha operator>> (int );
    Fecha operator<< (int );
    
    //Metodos de la clase
    string nombreMes();
    bool esBisiesto();

private:
    //Atributos
    int dd;
    int mm;
    int aa;
};

//Constructores
Fecha::Fecha()
{
    dd = 0;
    mm = 0;
    aa = 0;
}

Fecha::Fecha(int DD, int MM, int AA)
{
    dd = DD;
    mm = MM;
    aa = AA;
}

//Metodos de Acceso
int Fecha::getDD()
{
    return dd;
}

int Fecha::getMM()
{
    return mm;
}

int Fecha::getAA()
{
    return aa;
}

//Metodos de Modificacion
void Fecha::setFecha(int DD, int MM, int AA)
{
    dd = DD;
    mm = MM;
    aa = AA;
}

//Metodos de la clase operador
Fecha Fecha:: operator+(int dias)
{
    dd = dd + dias;
    if(dd > 31)
    {
        dd = 1;
        mm++;
        if(mm > 12)
        {
            aa++;
        }
    }
    Fecha f1(dd, mm, aa);
    return f1;
}

#endif /* Fecha_h */
