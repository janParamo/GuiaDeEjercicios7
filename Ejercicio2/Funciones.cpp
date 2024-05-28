#include <iostream>
#include "variables.h";

using namespace std;

int menu();
int registro();

int menu()
{
    system ("cls || clear");
    cout << "Menu de opciones: " << endl;
    cout << "1. Ingresar Agenda.dat " << endl;
    cout << "2. Mostrar datos " << endl;
    cout << "3. Salir " << endl;
    cout << "Seleccione una opcion: " << endl;
    cin >> opcion;
}

int registro()
{
    while (opcion != 4)
    {
        opcion = menu();
        switch (opcion)
        {
        case 1:
            cout << " Dime tu nombre: " << endl;
            cin >> nuevaAgenda.nombre;
            cout << " Dime tu direccion: " << endl;
            cin >> nuevaAgenda.direccion;
            cout << " Dime tu ciudad: " << endl;
            cin >> nuevaAgenda.ciudad;
            cout << " Dime tu telefono: " << endl;
            cin >> nuevaAgenda.telefono;
            cout << " Dime tu edad: " << endl;
            cin >> nuevaAgenda.edad;
            arregloAgenda[indice] = nuevaAgenda;
            indice++;
            system("pause");
            break;
        case 2:
            for (int i = 0; i < indice; i++)
            {
                cout << "Nombre: " << arregloAgenda[i].nombre << endl;
                cout << "Direccion: " << arregloAgenda[i].direccion << endl;
                cout << "Ciudad: " << arregloAgenda[i].ciudad << endl;
                cout << "Telefono: " << arregloAgenda[i].telefono << endl;
                cout << "Edad: " << arregloAgenda[i].edad << endl;
            }
        case 3:
            cout << "Saliendo" << endl;
            system("pause");
            break;
        default:
            cout << "Opcion no valida" << endl;
            system("pause");
            break;
        }   
    }
}