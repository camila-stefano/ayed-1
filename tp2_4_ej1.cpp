#include <iostream>

using namespace std;

int main(){

int cantidad, producto = 80; 

cout << "BAZAR MDP \n Ingrese la cantidad de productos que desea comprar: " << endl; 
cin >> cantidad;

if (cantidad >= 10 && cantidad <=19){
    cout << "Tenes un descuento del 12% \n Total: " << (producto * cantidad) - ((producto * cantidad) * 12 / 100) << endl;
} else if (cantidad >= 20 && cantidad <= 29){
    cout << "Tenes un descuento del 25% \n Total: " << (producto * cantidad) - ((producto * cantidad) * 25 / 100) << endl;
} else if (cantidad >= 30){
     cout << "Tenes un descuento del 40% \n Total: " << (producto * cantidad) - ((producto * cantidad) * 40 / 100) << endl;
} else {
    cout << "Total: " << producto * cantidad << endl; 
}

    return 0;
}


/*1. Hacer un programa en C++ para un bazar que tiene una promo de descuento para vender
al mayor, esta dependerá del número de Productos que se compren. Si son más de diez, se
les dará un 12% de descuento sobre el total de la compra; si el número de productos es
mayor de veinte pero menor de treinta, se le otorga un 25% de descuento; y si son más
treinta productos de le otorgará un 40% de descuento. El precio de cada producto es de
$80.*/
