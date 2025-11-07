#pragma once
#include <figuras/Figura.hpp>

class Circulo : public Figura
{
private:
    float radio;
public:
    Circulo(/* args */) {
        radio = 0;
    }
    ~Circulo() {}

    float LeerArea() override {
        return 3.1416 * radio;
    }

    float LeerPerimetro() override {
        return 2 * 3.1416 * radio;
    }
};