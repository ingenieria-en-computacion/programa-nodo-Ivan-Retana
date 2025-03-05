#include "nodo.h"
#include <stdio.h>

Nodo* crear_nodo(){
    Nodo* nuevo = ((Nodo*) malloc(sizeof(Nodo)));
    nuevo->sig= NULL;
    nuevo->dato=0;
    return nuevo;
}

bool borrar_nodo (Nodo*n){
    if(n->sig=NULL){
        free(n);
        return true;
    }
}

Nodo* asignar_dato(Nodo*n,DATO d){
    if(n !=NULL){
        n->dato= d;
    
    }
    return n;
}

DATO obtener_dato(Nodo*n){
    if(n !=NULL){
      printf("no hay datos\n");
      return -1;
    }
    return n;
}

Nodo* asignar_ref(Nodo*n,Nodo*c){
    if(n != NULL){
        n->sig=c;
    }
    return n;
}

Nodo* obtener_ref(Nodo*c){
    if(c != NULL){
        return c->sig;
    }
    return NULL;
}

bool borrar_nodo(Nodo*n){
    if(n->sig==NULL){
        free(n);
        return true;
    }
    return false;
}
