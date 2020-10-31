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
        Nodo *temp=new Nodo(dato);

        if(vacio())
        {
            primero=temp;
            ultimo=temp;
        }
        else
        {
            ultimo->siguiente=temp;
            temp->anterior=ultimo;
            ultimo=temp;
        }
    }

    void eliminar_dato_inicio()
    {
        if(vacio())
        {
            std::cout<<"No se puede eliminar, lista vacia"<<std::endl;
        }
        else
        {
            if(primero==ultimo)
            {
                primero=0;
                ultimo=0;
            }
            else
            {
                Nodo *temp=primero;
                primero=primero->siguiente;
                primero->anterior=0;
                delete temp;
            }
            std::cout<<"Eliminado"<<std::endl;
        }
    }

    void eliminar_dato_final()
    {
        if(vacio())
        {
            std::cout<<"No se puede eliminar, lista vacia"<<std::endl;
        }
        else
        {
            if(primero==ultimo)
            {
                primero=0;
                ultimo=0;
            }
            else
            {
                Nodo *temp=ultimo;
                ultimo=ultimo->anterior;
                ultimo->siguiente=0;
                delete temp;
            }
            std::cout<<"Eliminado"<<std::endl;
        }
    }

    void mostrar_lista()
    {
        if(vacio())
        {
            std::cout<<"Lista vacia"<<std::endl;
        }
        else
        {
            Nodo *aux=primero;
            bool seguir=true;
            while(seguir)
            {
                std::cout<<aux->dato<<std::endl;
                if(aux==ultimo)
                {
                    seguir=false;
                }
                aux=aux->siguiente;
            }
        }
    }
};

#endif // LISTA_DOBLE_H_INCLUDED
