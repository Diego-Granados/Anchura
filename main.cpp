#include "Grafo.h"
#include "Animal.h"
#include "INodo.h"
#include <vector>
#include <iostream>
#include <string>

#define NUM_ANIMALES 10

using namespace std;

int main(){
    Grafo zoologico(true); // grafo dirigido

    string animales [9] = {"Perro", "Gato", "Vaca", "Oso", "León", "Loro", "Mono", "Búho", "Pato"};

    for (int index = 1; index < NUM_ANIMALES; index++){
        zoologico.addNode(new Animal(index, animales[index - 1]));
    }

    
    zoologico.addArc(1, 2, 8);
    zoologico.addArc(1, 3, 3);
    zoologico.addArc(1, 6, 13);
    zoologico.addArc(2, 3, 2);
    zoologico.addArc(2, 4, 1);
    zoologico.addArc(3, 2, 3);
    zoologico.addArc(3, 4, 9);
    zoologico.addArc(3, 5, 2);
    zoologico.addArc(4, 5, 4);
    zoologico.addArc(4, 8, 2);
    zoologico.addArc(4, 7, 6);
    zoologico.addArc(5, 1, 5);
    zoologico.addArc(5, 6, 5);
    zoologico.addArc(5, 4, 6);
    zoologico.addArc(5, 9, 4);
    zoologico.addArc(6, 9, 7);
    zoologico.addArc(6, 7, 1);
    zoologico.addArc(7, 5, 3);
    zoologico.addArc(7, 8, 4);
    zoologico.addArc(8, 9, 3);
    zoologico.addArc(9, 7, 5);

    vector<INodo*> profundidad = zoologico.deepPath(zoologico.getNodo(1)->getInfo());
    
    cout << "Recorrido en profundidad" << endl;
    for (INodo* nodo : profundidad){
        Animal* animal = (Animal*)(void*)nodo;
        cout << "     " << animal->getNombre() << endl;
    }

    vector<INodo*> anchura = zoologico.broadPath(zoologico.getNodo(1)->getInfo());

    cout << "Recorrido en anchura" << endl;
    for (INodo* nodo : anchura){
        Animal* animal = (Animal*)(void*)(nodo);
        cout << "     " << animal->getNombre() << endl;
    }
}