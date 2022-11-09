#ifndef ANIMAL

#define ANIMAL 1

#include <string>

using namespace std;

class Animal : public INodo {
    private:
        string nombre;

    public:
        Animal (int pId, string pNombre){
            id = pId;
            nombre = pNombre;
        }

        void setNombre(string pNombre){
            nombre = pNombre;
        }

        string getNombre(){
            return nombre;
        }
};

#endif