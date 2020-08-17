#include <iostream>

using namespace std;

int main (){

float n1, n2, n3, promedio;

cout << "Ingrese la nota del primer parcial: ";
cin >> n1;
cout << "Ingrese la nota del segundo parcial: ";
cin >> n2;
cout << "Ingrese la nota del tercer parcial: ";
cin >> n3;

promedio = ((n1+n2+n3) / 3);

if (promedio >= 4){
    cout << "APROBADO" << endl;
} else {
    cout << "DESAPROBADO" << endl;
}


/*3. Hacer un programa en C++ para determinar el promedio de tres notas y determinar si el
estudiante aprobó o no.*/

    return 0;
}