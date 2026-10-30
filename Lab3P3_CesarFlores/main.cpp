//
//  main.cpp
//  Lab3P3_CesarFlores
//
//  Created by Cesar Flores on 30/10/26.
//

#include <iostream>
using namespace std;
void aceleradorParticulas() {
    cout << "BIENVENIDO AL ACELARADOR DE PARTÍCULAS" << endl;
    int numero;
    do {
        cout << "Ingrese tamaño del acelarador en la simulacion (número impar entre 5 y 15): ";
        cin >> numero;
    } while (numero < 5 || numero > 15 || numero % 2 == 0);
    char* matriz = new char*[numero];
    for (int indice = 0; indice < matriz; ++indice) {
        matriz[indice] =
    }
    }
int main(int argc, const char * argv[]) {
    bool ejecutarMenu = true;
    int opcion = 0;
    while (ejecutarMenu) {
        cout << "|°°°|°°°|°°°|°°°|°°°|°°° MENÚ °°°|°°°|°°°|°°°|°°°|°°°|" << endl;
        cout << "1. Acelerador de Partículas" << endl;;
        cout << "2. Teseracto Simulado" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese opción a realizar: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                aceleradorParticulas();
                break;
            case 2:
                
                break;
            case 3:
                
                break;
            default:
                break;
        }
    }
    
    return EXIT_SUCCESS;
}
