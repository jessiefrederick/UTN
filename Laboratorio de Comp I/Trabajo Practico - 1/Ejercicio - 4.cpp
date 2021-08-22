//Nombre: Jessie Frederick
//TP Nº: 1
//EJ Nº: 4
//Comentarios:
#include<iostream>
using namespace std;

int main(void) {
    int cantidadAsientosDisponibles;
    int cantidadPasajesOcupados;
    int asientosTotales;

    cout << "Ingresar cantidad de asientos disponibles: ";
    cin >> cantidadAsientosDisponibles;

    cout << "Ingresar cantidad de pasajes ocupados: ";
    cin >> cantidadPasajesOcupados;

    asientosTotales = cantidadPasajesOcupados + cantidadAsientosDisponibles;
    int porcentajeDeOcupacion = cantidadPasajesOcupados * 100 / asientosTotales;
    int porcentajeDeAsientosDisponibles = cantidadAsientosDisponibles * 100 / asientosTotales;

    cout << "Porcentaje de ocupacion: " << porcentajeDeOcupacion;
    cout << "Porcentaje de Asientos Disponibles: " << porcentajeDeAsientosDisponibles;

	return 0;
}
