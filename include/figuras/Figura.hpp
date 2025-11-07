#pragma once

class Figura
{
private:
    /* data */
public:
    Figura(/* args */) {}
    ~Figura() {}

    virtual float LeerArea()=0;         //no está definido, no hay fórmula general
    virtual float LeerPerimetro()=0;
};