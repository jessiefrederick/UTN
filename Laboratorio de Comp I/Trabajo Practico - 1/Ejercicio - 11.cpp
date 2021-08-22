//Nombre: Jessie Frederick
//TP Nº: 1
//EJ Nº: 11
//Comentarios:
#include<iostream>
using namespace std;

int main(void) {
    int cantidadMinutos;

    cout << "Ingresar cantidad de minutos: "; 
    cin >> cantidadMinutos; // 672390

    int minutos = cantidadMinutos % 60; // 30 
    int horas = ((cantidadMinutos - minutos) / 60) % 24; // 22 
    int dias = (((cantidadMinutos - minutos) / 60) - horas) / 24; // 466 

    cout << "Dias: " << dias << "Horas: " << horas << "Minutos: " << minutos;

	return 0;
}