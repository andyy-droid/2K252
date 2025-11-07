#pragma once
#include <figuras/Figura.hpp>

class Cuadrado : public Figura      //herencia (es un)
{
private:
    float lado;

public:
    Cuadrado(/* args */) {
        lado = 0;
    }
    ~Cuadrado() {}

    float LeerArea() override {
        return lado * lado;
    }

    float LeerPerimetro() override {
        return 4 * lado;
    }
};