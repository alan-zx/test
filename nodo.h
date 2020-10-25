#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

struct Nodo
{
    int dato;
    Nodo *siguiente;
    Nodo *anterior;
    Nodo(int dato)
    {
        this->dato=dato;
        siguiente=0;
        anterior=0;
    }
};


#endif // NODO_H_INCLUDED
