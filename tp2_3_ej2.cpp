#include <iostream>

using namespace std;

int main (){

float horas, extras;

cout << "Ingrese la cantidad de horas trabajadas: " << endl;
cin >> horas;
 
if (horas <= 40){
    cout << "Tu sueldo a cobrar es: " << (horas * 200) << endl;
} else {
    extras = horas - 40;
    cout << "Tu sueldo a cobrar es: " << (40 * 200) + (extras * 250) << endl;
}

    return 0;
}

/*Hacer un programa en C++ para ayudar a un trabajador a saber cuál será su salario
semanal, se sabe que si trabaja 40 horas o menos, se le pagará $200 por hora, pero si
trabaja más de 40 horas entonces las horas extras se le pagarán a $250 por hora.*/