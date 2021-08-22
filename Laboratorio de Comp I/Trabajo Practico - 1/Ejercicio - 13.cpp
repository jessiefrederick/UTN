//Nombre: Jessie Frederick
//TP Nº: 1
//EJ Nº: 13
//Comentarios:
#include<iostream>
using namespace std;

int main(void) {
    int importeRetirar;

    cout << "ingresa imp retirar";
    cin >> importeRetirar;

    int billetes1000 = (importeRetirar - (importeRetirar % 1000)) / 1000;
    int importeSinRetirar = importeRetirar - (billetes1000 * 1000);

    int billetes500 = (importeSinRetirar - (importeSinRetirar % 500)) / 500; 
    int importeSinRetirar2 = importeRetirar - (billetes1000 * 1000) - (billetes500 * 500);

    int billetes200 = (importeSinRetirar2 - (importeSinRetirar2 % 200)) / 200;
    int importeSinRetirar3 = importeRetirar - (billetes1000 * 1000) - (billetes500 * 500) - (billetes200 * 200);

    int billetes100 = (importeSinRetirar3 - (importeSinRetirar3 % 100)) / 100;

    cout << "Billetes de $1000: " << billetes1000 << " Billetes de $500: " << billetes500 << " Billetes de $200: " << billetes200 << " Billetes de $100: " << billetes100;

    return 0;
}
