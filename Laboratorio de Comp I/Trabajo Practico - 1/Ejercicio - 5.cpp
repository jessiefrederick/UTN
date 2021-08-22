//Nombre: Jessie Frederick
//TP Nº: 1
//EJ Nº: 5
//Comentarios:
#include<iostream>
using namespace std;

int main(void) {
    int cantidadAlfajoresA;
    int cantidadAlfajoresB;
    int cantidadAlfajoresC;
    int totalAlfajores;

    cout << "Ingresar cantidad de alfajores A: ";
    cin >> cantidadAlfajoresA;

    cout << "Ingresar cantidad de alfajores B: ";
    cin >> cantidadAlfajoresB;

    cout << "Ingresar cantidad de alfajores C: ";
    cin >> cantidadAlfajoresC;
    
    totalAlfajores = cantidadAlfajoresA + cantidadAlfajoresB + cantidadAlfajoresC;
    int porcentajeDeAlfajoresA = cantidadAlfajoresA * 100 / totalAlfajores;
    int porcentajeDeAlfajoresB = cantidadAlfajoresB * 100 / totalAlfajores;
    int porcentajeDeAlfajoresC = cantidadAlfajoresC * 100 / totalAlfajores;
    
    cout << "Porcentaje de Alfajores A: " << porcentajeDeAlfajoresA;
    cout << "Porcentaje de Alfajores B: " << porcentajeDeAlfajoresB;
    cout << "Porcentaje de Alfajores C: " << porcentajeDeAlfajoresC;
	
    return 0;
}