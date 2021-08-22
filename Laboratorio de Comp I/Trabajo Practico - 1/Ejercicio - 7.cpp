//Nombre: Jessie Frederick
//TP Nº: 1
//EJ Nº: 7
//Comentarios:
#include<iostream>
using namespace std;

int main(void) {
    int importeDeVenta;
    int porcentajeDeDescuento;

    cout << "Ingresar importe de venta: ";
    cin >> importeDeVenta;

    cout << "Ingresar porcentaje de descuento: ";
    cin >> porcentajeDeDescuento;


    int importeAPagar = importeDeVenta * (100 - porcentajeDeDescuento ) / 100; 

	return 0;
}
