//
//  main.cpp
//  Leer archivo a ver si funciona
//
//  Created by Brenda Silva on 4/21/18.
//  Copyright © 2018 Brenda Silva. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string.h>
#include <string>

using namespace std;

int main()
{
    
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
    
    archMaterial.open("materiales.txt");
    archReserva.open("reserva.txt");
    
    if(archMaterial.is_open())
    {
        while(!archMaterial.eof())
        {
            archMaterial >> iDM;
            archMaterial >> titulo;
            archMaterial >> c;
            
                    cout << iDM << titulo << c;
            
            if(c == 'L')
            {
                archMaterial >> numPag;
                archMaterial >> autor;
                
                cout << numPag << autor;
            }
            else
                if(c == 'D')
                {
                    archMaterial >> duracion;
                    
                    cout << duracion;
                }
                else
                    if(c == 'S')
                    {
                        archMaterial >> sistema;
                        
                        cout << sistema;
                    }
            cout << endl;
        }
        i++;
        
    }
    else
        cout << "No se pudo abrir el archivo";

    return 0;
}
