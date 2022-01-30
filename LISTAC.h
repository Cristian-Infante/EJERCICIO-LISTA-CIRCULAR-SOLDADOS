#ifndef LISTAC_H
#define LISTAC_H
#include "NODO.cpp"

template <class T>
class LISTAC
{
    private:
        NODO<T> *head;
    public:
        LISTAC();
        virtual ~LISTAC();
        void add(T);
        T remove(int n);
        void print();
        bool search(T);
        bool isEmpty();
};

#endif // LISTAC_H
