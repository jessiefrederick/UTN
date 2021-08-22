//Nombre: Jessie Frederick
//TP Nº: 1
//EJ Nº: 8
//Comentarios:
#include<iostream>
using namespace std;

int main(void) {
    int importeDeVentaConDescuento;
    int importeDeVentaSinDescuento;

    cout << "Ingresar importe de venta con descuento: ";
    cin >> importeDeVentaConDescuento;

    cout << "Ingresar importe de venta sin descuento: ";
    cin >> importeDeVentaSinDescuento;


    int porcentajeDescuentoAplicado = (importeDeVentaSinDescuento - importeDeVentaConDescuento) * 100 / importeDeVentaSinDescuento;
 
    cout << "Porcentaje de descuento aplicado: " << porcentajeDescuentoAplicado;

	return 0;
}