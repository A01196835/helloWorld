//
//  main.cpp
//  Proyecto 3
//
//  Created by Brenda Silva on 4/13/18.
//  Copyright © 2018 Brenda Silva. All rights reserved.
//


#include <iostream>
#include <fstream>
#include <string.h>
#include <string>

#include "Reserva.h"
#include "Libro.h"
#include "Disco.h"
#include "Software.h"
#include "Material.h"

using namespace std;

int main()
{
    //Variables para el uso
    char cOpcion;
    int i = 0;
    
    int iDM;
    string titulo;
    char c;
    //Para libro = L
    int numPag;
    string autor;
    //Para disco = D
    int duracion;
    //Para software = S
    string sistema;
    
    int dd, mm, aa, iDR, idCliente;

    //Declraracion de archivos externos
    ifstream archMaterial;
    ifstream archReserva;
    
    Material *arrMaterial[20];
    Reserva *arrReservaciones[50];
    
    Libro arregloL[10];
    Disco arregloD[5];
    Software arregloS[5];
    Reserva arregloRes[10];

    archMaterial.open("materiales.txt");
    archReserva.open("reserva.txt");
    
    if(archMaterial.is_open())
    {
        while(!archMaterial.eof())
        {
                archMaterial >> iDM;
                archMaterial >> titulo;
                archMaterial >> c;
                
                if(c == 'L')
                {
                    archMaterial >> numPag;
                    archMaterial >> autor;
                    
                    arregloL[i].setIdMaterial(iDM);
                    arregloL[i].setTitulo(titulo);
                    arregloL[i].setNumPag(numPag);
                    arregloL[i].setAutor(autor);
                }
                else
                    if(c == 'D')
                    {
                        archMaterial >> duracion;
                        arregloD[i].setIdMaterial(iDM);
                        arregloD[i].setTitulo(titulo);
                        arregloD[i].setDuracion(duracion);
                    }
                    else
                        if(c == 'S')
                        {
                            archMaterial >> sistema;
                            arregloS[i].setIdMaterial(iDM);
                            arregloS[i].setTitulo(titulo);
                            arregloS[i].setSoftware(sistema);
                        }
            
            arrMaterial[i] = &arregloL[i];
            arrMaterial[i] = &arregloD[i];
            arrMaterial[i] = &arregloS[i];
            i++;
        }
        
    }
    else
        cout <<"No se pudo abrir el archivo!";
    
    if(archReserva.is_open())
    {
        while(!archReserva.eof())
        {
                archReserva >> dd;
                archReserva >> mm;
                archReserva >> aa;
                archReserva >> iDR;
                archReserva >> idCliente;
                
                arregloRes[i].setMaterial(iDR);
                arregloRes[i].setCliente(idCliente);
                Fecha f1(dd, mm, aa);
                arregloRes[i].setFechaReservacion(f1);
            
            arrReservaciones[i] = &arregloRes[i];
            i++;
        }
    }
    else
        cout <<"No se pudo abrir el archivo!";
    
    archMaterial.close();
    archReserva.close();

    do
    {
        cout << "Menu : " << endl;
        cout << "a. Consultar la lista de Materiales." << endl;
        cout << "b. Consultar la lista de Reservaciones." << endl;
        cout << "c. Consultar las reservaciones de un material dado." << endl;
        cout << "d. Consultar las reservaciones de una fecha dada." << endl;
        cout << "e. Hacer una reservacion." << endl;
        cout << "f. Terminar." << endl;
        cout << endl;
        cout << "Ingresa una opcion: ";
        cin >> cOpcion;
        
        switch (cOpcion)
        {
            case 'a':
                break;
            case 'b':
                break;
            case 'c':
                break;
            case 'd':
                break;
            case 'e':
                break;
            case 'f':
                break;
            default:
                cout <<"Ingresa una opcion valida" << endl;
                break;
        }
    }
    while(cOpcion != 'f');
    
    return 0;
}
