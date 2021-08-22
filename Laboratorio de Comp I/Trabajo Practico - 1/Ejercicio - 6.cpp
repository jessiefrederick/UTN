//Nombre: Jessie Frederick
//TP Nº: 1
//EJ Nº: 6
//Comentarios:
#include<iostream>
using namespace std;

int main(void) {
    int recaudacionSemana1;
    int recaudacionSemana2;
    int recaudacionSemana3;
    int recaudacionSemana4;

    cout << "Ingresar recaudacion de Semana 1 ";
    cin >> recaudacionSemana1;

    cout << "Ingresar recaudacion de semana 2: ";
    cin >> recaudacionSemana2;

    cout << "Ingresar recaudacion de semana 3: ";
    cin >> recaudacionSemana3;
    
    cout << "Ingresar recaudacion de semana 4: ";
    cin >> recaudacionSemana4;

    int promedioSemanal = (recaudacionSemana1 + recaudacionSemana2 + recaudacionSemana3 + recaudacionSemana4) / 4;
    int total = recaudacionSemana1 + recaudacionSemana2 + recaudacionSemana3 + recaudacionSemana4;

    int porcentajeRecaudacionSemana1= recaudacionSemana1 * 100 / total;
    int porcentajeRecaudacionSemana2= recaudacionSemana2 * 100 / total;
    int porcentajeRecaudacionSemana3= recaudacionSemana3 * 100 / total;
    int porcentajeRecaudacionSemana4= recaudacionSemana4 * 100 / total;

    cout << "Porcentaje de Recaudacion Semana 1: " << porcentajeRecaudacionSemana1;
    cout << "Porcentaje de Recaudacion Semana 2: " << porcentajeRecaudacionSemana2;
    cout << "Porcentaje de Recaudacion Semana 3: " << porcentajeRecaudacionSemana3;
	cout << "Porcentaje de Recaudacion Semana 4: " << porcentajeRecaudacionSemana4;

    return 0;
}