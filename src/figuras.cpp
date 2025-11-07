#include <iostream>
#include <figuras/Figura.hpp>
#include <figuras/Cuadrado.hpp>
using namespace std;

int main(int argc, char const *argv[])
{
    Figura* f;
    f = new Cuadrado();

    cout << "Area: " << f->LeerArea() << endl;
    cout << "Perimetro: " << f->LeerPerimetro() << endl;

    return 0;
}
