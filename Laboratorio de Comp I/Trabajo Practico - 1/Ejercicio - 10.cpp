//Nombre: Jessie Frederick
//TP Nº: 1
//EJ Nº: 10
//Comentarios:
#include<iostream>
using namespace std;

int main(void) {
    int cantidadHoras;

    cout << "Ingresar cantidad de horas: ";
    cin >> cantidadHoras;

    int horas = cantidadHoras % 24; 
    int dias = (cantidadHoras - horas) / 24;

    cout << "Dias: " << dias << "Horas: " << horas;

	return 0;
}