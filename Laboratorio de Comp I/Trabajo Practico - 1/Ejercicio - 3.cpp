//Nombre: Jessie Frederick
//TP Nº: 1
//EJ Nº: 3
//Comentarios:
#include<iostream>
using namespace std;

int main(void) {
    int sueldoFijo = 15000;
    int premio = 2000;
    int cantidadAutosVendidos;

    cout << "Ingresar cantidad de autos vendidos: ";
    cin >> cantidadAutosVendidos;

    cout << "Sueldo total a pagar: " << sueldoFijo + cantidadAutosVendidos * premio;

	return 0;
}
