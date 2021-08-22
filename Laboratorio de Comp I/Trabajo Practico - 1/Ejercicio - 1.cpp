//Nombre: Jessie Frederick
//TP Nº: 1
//EJ Nº: 1
//Comentarios:
#include<iostream>
using namespace std;

int main(void) {
    int cantidadHorasTrabajadas;
    int valorHora;

    cout << "Ingresar cantidad de horas trabajadas: ";
    cin >> cantidadHorasTrabajadas;

    cout << "Ingresar valor hora de trabajo: ";
    cin >> valorHora;

    cout << "Sueldo: " << cantidadHorasTrabajadas * valorHora;

	return 0;
}

