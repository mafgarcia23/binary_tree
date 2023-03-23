#ifndef __BINARYTREE_H__
#define __BINARYTREE_H__

#include "BinaryNode.h"

template <class T>
class BinaryTree {

    protected:
    BinaryNode<T>= raiz; 
    public: 
    BinaryTree();
    ~BinaryTree(); 
    bool esVacio();
    T datoRaiz();
    int altura();
    int tamaño();
    bool insertar(T val); 
    bool eliminar(T, val);
    bool buscar (T, val);
    void preOrden();
    void inOrden();
    void posOrden();
    void nivelOrden();
};

#include "BinaryTree.cxx"
#endif
