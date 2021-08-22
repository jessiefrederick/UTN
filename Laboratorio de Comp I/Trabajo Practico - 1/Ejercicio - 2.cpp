//Nombre: Jessie Frederick
//TP Nº: 1
//EJ Nº: 2
//Comentarios:
#include<iostream>
using namespace std;

int main(void) {
    int numero1;
    int numero2;
    int auxiliar;

    cout << "Ingresar numero1: ";
    cin >> numero1;

    cout << "Ingresar numero2: ";
    cin >> numero2;

    auxiliar = numero1;
    numero1 = numero2;
    numero2 = auxiliar;

    cout << "A=" << numero1 << " B=" << numero2;

	return 0;
}
