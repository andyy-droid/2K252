#pragma once
#include <figuras/Figura.hpp>

class Triangulo : public Figura
{
private:
    float base;
    float altura;
    float lado1;
    float lado2;
    float lado3;
public:
    Triangulo(/* args */) {
        base = 2;
        altura = 2;
        lado1 = 2;
        lado2 = 2;
        lado3 = 2;
    }
    ~Triangulo() {}
};