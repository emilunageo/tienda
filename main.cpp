/*
 * Proyecto Tienda Online
 * Emiliano Luna George
 * A01710584
 * 16/10/2023
*/
#include <iostream>
#include <string>
#include "Catalogo.h"
using namespace std;

int main() {
    Catalogo* catalogo = new Catalogo();
    int opcion;
    while (true) {
    cout << "=== Menú Cliente ===" << endl;
    cout << "1. Ver productos en la Tienda" << endl;
    cout << "2. Añadir producto al Carrito" << endl;
    cout << "3. Realizar pago" << endl;
    cout << "0. Salir" << endl;
    cout << "Seleccione una opción: ";
    cin >> opcion;
    if (opcion == 0) {
        break;
    }
    switch (opcion) {
        case 1:
            catalogo->mostrarCatalogo();
            break;
        case 2:
            catalogo->agregarProductos();
            break;
        case 3:
         catalogo->realizarPago();
            break;
        default:
            cout << "Opción inválida. Intente nuevamente." << endl;
            break;
    }
}
return 0;
}