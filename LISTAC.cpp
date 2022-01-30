#include "LISTAC.h"

template <typename T>
LISTAC<T>::LISTAC()
{
    head = nullptr;
}

template <typename T>
LISTAC<T>::~LISTAC()
{
    //dtor
}

template <typename T>
void LISTAC<T>::add(T dato){
     NODO<T> *nuevo = new NODO<T>(dato);
     if(head==nullptr){
         head = nuevo;
         head->setSiguiente(head);
     }
    else {
         NODO<T> *aux = head;
         while (aux->getSiguiente() != head){
             aux = aux->getSiguiente();
         }
         aux->setSiguiente(nuevo);
         nuevo->setSiguiente(head);
    }
}

template <typename T>
T LISTAC<T>::remove(int n){
    int cont=0;
    NODO<T> *aux = head;
    NODO<T> *ant = nullptr;
    while(cont<n){
        if(head==nullptr){
            return 0;
        }
        else if(head->getSiguiente()==head){
            T x;
            x = head->getInfo();
            head = nullptr;
            return x;
        }
        ant = aux;
        aux = aux->getSiguiente();
        cont++;
    }
    ant->setSiguiente(aux->getSiguiente());
    head = aux->getSiguiente();
    return aux->getInfo();
}

template <typename T>
void LISTAC<T>::print(){
   NODO<T> *aux = head;
   do{
      cout<<"  "<<aux->getInfo();
      aux = aux->getSiguiente();
   }while (aux != head);
}

template <typename T>
bool LISTAC<T>::search(T dato){
    if(isEmpty()){
        return false;
    }
    else{
        NODO<T> *aux = head;
        NODO<T> *ant = nullptr;
        while (aux->getSiguiente() != head && aux->getInfo() != dato){
            ant = aux;
            aux = aux->getSiguiente();
        }
        if(aux->getSiguiente() != head){
            head = aux;
            return true;
        }
        else{
            return false;
        }
    }
}

template <typename T>
bool LISTAC<T>::isEmpty(){
    if(head==nullptr){
        return true;
    }
    else{
        return false;
    }
}
