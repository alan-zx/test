#ifndef LISTA_DOBLE_H_INCLUDED
#define LISTA_DOBLE_H_INCLUDED

#include "nodo.h"

class Lista_doble
{
  public:
    Nodo *primero;
    Nodo *ultimo;
    Lista_doble()
    {
        primero=0;
        ultimo=0;
    }

    bool vacio()
    {
        return (primero==0);
    }

    void insertar_dato_inicio(int dato)
    {
        Nodo *temp=new Nodo(dato);
        if(vacio())
        {
            primero=temp;
            ultimo=temp;
        }
        else
        {
            temp->siguiente=primero;
            primero->anterior=temp;
            primero=temp;
        }
    }

    void insertar_dato_final(int dato)
    {
        //Código
    }

    void eliminar_dato_inicio()
    {
        //Código
    }

    void eliminar_dato_final()
    {
        //Código
    }

    void mostrar_lista()
    {
        //Código
    }
};

#endif // LISTA_DOBLE_H_INCLUDED
