/*
* Proyecto Tienda Online
* Emiliano Luna George
* A01710584
* 16/10/2023

* La clase Catalogo es en donde se van a instanciar o crear
* todos nuestros objetos de tipo producto, esto nos permite
* manipularnos de una manera más sencilla y eficiente.
*/
#include "Producto.h"
#include <iostream>
using namespace std;
class Catalogo{
    private:
        Producto *catalogo[11];
        float costo;
    public:
        Catalogo();
        /* 
        * mostrarCatalogo() Recorre el catalogo y muestra los productos 
        * Está función permite recorrer el arreglo catalogo por posición
        * y así mostrar cada producto creado
        * @param 
        * @return 
        */
        void mostrarCatalogo(){
            for (int i = 0; i<11 ; i++) {
                catalogo[i]->mostrarProducto();
                cout << endl;
            }
        }
        /* 
        * agregarProductos() hace la sumatoria del costo por producto
        * agregarProductos() va sumando el precio del producto en base al ID que vaya ingresando 
        * el usuario.
        * @param 
        * @return    
        */
        void agregarProductos(){
            int selectorID;
            while (true) {
                cout << "Agrega el numero del ID del producto que deseas agregar: " << endl;
                cin >> selectorID;
                if (selectorID == 0){
                    break;
                }
                switch (selectorID){
                case 1:
                    costo += 2500;
                    cout << "Producto: Teclado Gamer" << endl;
                    break;
                case 2:
                    costo += 600;
                    cout << "Sudadera Café H&M" << endl;
                    break;
                case 3:
                    costo += 32000;
                    cout << "Laptop Dell Inspirion" << endl;
                    break;
                case 4:
                    costo += 700;
                    cout << "Playera Negra FATE" << endl;
                    break;
                case 5:
                    costo += 12000;
                    cout << "Celular Samsumng" << endl;
                    break;
                case 6:
                    costo += 1200;
                    cout << "Sudadera Negra Fate" << endl;
                    break;
                case 7:
                    costo += 1541.96;
                    cout << "Mouse Logitech G 502" << endl;
                    break;
                case 8:
                    costo += 800;
                    cout << "Pantalon Mezclilla Zara" << endl;
                    break;
                case 9:
                    costo += 5278;
                    cout << "Audífonos Sony WH1000XM4" << endl;
                    break;
                case 10:
                    costo += 8900;
                    cout << "Chamarra Hugo Negra" << endl;
                    break;
                case 11:
                    costo += 699;
                    cout << "Bocina Inteligente Alexa" << endl;
                    break;
                default:
                    cout << "El producto que elegiste no es válido por favor vuelve a intentarlo." << endl;
                    break;
                }
            }
        }
        /* 
        * realizarPago() Sumatoria y print de compra 
        * Esta función recibe el valor del costo que se fue acumulando en el
        * método anterior y lo muestra al usuario para confirmar la compra
        * @param 
        * @return 
        */
        void realizarPago(){
            string respuesta;
            cout << "¿Deseas realizar el pago de: " << costo << " por tus productos?" << endl;
            cout << "si/no" << endl;
            cin >> respuesta;
            if (respuesta == "si"){
                costo = 0;
                cout << "Gracias por su compra, sus productos llegaran en 3 días hábiles." << endl;
            }else{
                cout << "Vuelve pronto." << endl;
            }
        }
};

Catalogo::Catalogo(){
    catalogo[0] = new ProductoElectronico(1, "Teclado Gamer", "Electrónico", "Logitech", 2500, "LKP500", 2023);
    catalogo[1] = new ProductoRopa(2, "Sudadera", "Ropa", "H&M", 600, "M", "Café");
    catalogo[2] = new ProductoElectronico(3, "Laptop", "Electrónico", "Dell", 32000, "Inspirion 3055", 2023);
    catalogo[3] = new ProductoRopa(4, "Playaera", "Ropa","Fate", 700, "XL", "Negro");
    catalogo[4] = new ProductoElectronico(5, "Celular", "Electronico", "Samsumng", 12000, "One Note", 2022);
    catalogo[5] = new ProductoRopa(6, "Sudadera", "Ropa", "Fate", 1200, "M", "Negro");
    catalogo[6] = new ProductoElectronico(7, "Mouse", "Electronico", "Logitech", 1541.96, "Logitech G 502", 2023);
    catalogo[7] = new ProductoRopa(8, "Pantalon", "Ropa", "Zara", 800, "M", "Mezclilla");
    catalogo[8] = new ProductoElectronico(9, "Audifonos", "Electronico", "Sony", 5278, "WH1000XM4", 2019);
    catalogo[9] = new ProductoRopa(10, "Chamarra", "Ropa", "Hugo", 8900, "M", "Negro");
    catalogo[10] = new ProductoElectronico(11, "Bocina inteligente", "Electronico", "Amazon", 699, "Edicon limitada", "Echo Dot", 2023);
}
