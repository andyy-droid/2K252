#pragma once
#include <EstadoFoco.hpp>

class Foco
{
private:
    bool estado;
    
public:
    Foco() {}    //constructor cuando nace un objeto
    ~Foco() {}   //destructor cuando se elimina un objeto

    void Encender(void){
        estado=true;
    }
    void Apagar(void){
        estado=false;
    }
    EstadoFoco MostrarEstado(){
        return estado;
    }
};