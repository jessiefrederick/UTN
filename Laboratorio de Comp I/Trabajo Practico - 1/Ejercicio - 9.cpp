//Nombre: Jessie Frederick
//TP Nº: 1
//EJ Nº: 9
//Comentarios:
#include<iostream>
using namespace std;

int main(void) {
    int cantidadMinutos;

    cout << "Ingresar cantidad de minutos: ";
    cin >> cantidadMinutos;

    int minutos = cantidadMinutos % 60; 
    int horas = (cantidadMinutos - minutos) / 60;

    cout << "Horas: " << horas << "Minutos: " << minutos;

	return 0;
}