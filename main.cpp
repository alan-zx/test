#include <iostream>
#include <cstdlib>
#include "lista_doble.h"

int main()
{
    char opc;
    int dato;
    Lista_doble *lista=new Lista_doble();
    do
    {
        std::cout<<std::endl;
        std::cout<<"1.- Insertar dato al inicio"<<std::endl;
        std::cout<<"2.- Insertar dato al final"<<std::endl;
        std::cout<<"3.- Eliminar dato al inicio"<<std::endl;
        std::cout<<"4.- Eliminar dato al final"<<std::endl;
        std::cout<<"5.- Mostrar lista"<<std::endl;
        std::cout<<"6.- Salir"<<std::endl;
        std::cout<<"Opcion: ";
        std::cin>>opc;
        system("cls");
        switch(opc)
        {
        case '1':
            std::cout<<"Escriba el dato a agregar: ";
            std::cin>>dato;
            lista->insertar_dato_inicio(dato);
            break;
        case '2':
            std::cout<<"Escriba el dato a agregar: ";
            std::cin>>dato;
            lista->insertar_dato_final(dato);
            break;
        case '3':
            lista->eliminar_dato_inicio();
            break;
        case '4':
            lista->eliminar_dato_final();
            break;
        case '5':
            lista->mostrar_lista();
            break;
        case '6':
            std::cout<<"Saliendo...";
            break;
        default:
            std::cout<<"Opcion erronea, intente de nuevo"<<std::endl<<std::endl;
        }
    }while(opc!='6');

    return 0;
}
