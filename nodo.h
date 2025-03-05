#ifndef __NODO_H__
#define __NODO_H__
#include <stdbool.h>

typedef int DATO;
typedef struct _Nodo Nodo;
struct _Nodo{
    DATO dato;
    Nodo*sig;
};



Nodo crear_nodo(DATO);
bool borrar_nodo(Nodo);
void asignar_dato(Nodo, DATO);
DATO obtener_dato(Nodo);
void asignar_ref(Nodo, Nodo);
Nodo* obtener_ref(Nodo);

#endif
