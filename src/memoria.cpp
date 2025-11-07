#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /*cout << sizeof(float) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(bool) << endl;
    cout << sizeof(byte) << endl;*/


    //bool A;
    //cout << "direccion A: " << &A << endl;
    //cout << malloc(4) << endl;

   /* void* direccion = malloc(4);
    cout << direccion << endl;              //contenido de la variable
    cout << &direccion << endl;             //ubicacion de la variable
    cout << sizeof(direccion) << endl; */     //tamaño

    int lista[4];
    cout << lista << endl;
    lista[0] = 1;
    lista[1] = 2;
    lista[2] = 3;
    lista[3] = 4;
    cout << lista[0] << endl;
    cout << &lista[0] << endl;
    cout << lista+1 << endl;
    cout << *(lista+1) << endl;

    return 0;
}
