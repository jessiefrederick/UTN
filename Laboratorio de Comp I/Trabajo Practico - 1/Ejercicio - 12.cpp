//Nombre: Jessie Frederick
//TP Nº: 1
//EJ Nº: 12
//Comentarios:
#include<iostream>
using namespace std;

int main(void) {
    int cantidadHuevos;

    cout << "Ingresar cantidad de huevos ";
    cin >> cantidadHuevos;

    int unidadesSueltas = cantidadHuevos % 12;
    int docena = (cantidadHuevos - unidadesSueltas) / 12; 
    int importeTotalAPagar = (docena * 100) + unidadesSueltas * 12; 
    
    cout << "El cliente paga: " << importeTotalAPagar;

	return 0;
}