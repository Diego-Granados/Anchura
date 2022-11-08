#include <iostream>
#include "List.h"
#ifndef NODO 

#define NODO 1

using namespace std;

template <class T>
class Nodo {
    private:
        T * data;
        List<Nodo> adyacentes;
        int numVertice;
        string nombre;
        bool visitado = false;
        bool procesado = false;
        List<Arco> arcos;
    
    public:
        Node() {
            data = NULL;
            num = -1;
            nombre = NULL;
            adyacentes = new List<Nodo>();
            arcos = new List<Arco>();
        }

        Node(T *pData, string pNombre) {
            this->data = pData;
            num = -1;
            nombre = pNombre;
            adyacentes = new List<Nodo>();
            arcos = new List<Arco>();
        }

        T* getData() {
            return data;
        }

        void setData(T *pData) {
            this->data = pData;
        }

        List<Nodo> getAdyacentes(){
            return adyacentes;
        }

        void setAdyacentes(List<Nodo> * pAdyacentes){
            adyacentes = pAdyacentes;
        }

        bool getVisitado() {
            return visitado;
        }

        bool setVisitado(bool pEstado) {
            this->visitado = pEstado;
        }

        bool getProcesado() {
            return procesado;
        }

        bool setProcesado(bool pEstado) {
            this->procesado = pEstado;
        }
};

#endif