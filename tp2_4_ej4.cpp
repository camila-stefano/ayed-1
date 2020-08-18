#include <iostream>

using namespace std;

int main (){

    int numero = 0, suma_numeros = 0, cant_numeros = 0;
    double promedio;
    cout << "Ingrese numeros para calcular el promedio de ellos, ingrese 99 para dejar de contar: ";

    while (numero != 99) {
        cin >> numero;

        if ( numero != 99){
            cout << "Ingrese otro numero: ";
            cant_numeros++;
            suma_numeros += numero;
        }
    }

    promedio = suma_numeros / cant_numeros;
    cout << "El promedio es " << promedio << endl;

    cin.ignore();
    cin.get();

/*4. Hacer un programa en C++ que pida números hasta que el usuario introduzca 99, luego
mostrar los números y el promedio. */

    return 0;
}