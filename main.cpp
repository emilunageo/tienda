#include <iostream>
#include <string>
using namespace std;
class Tienda
{
private:
    string nombre;
public:
    Tienda(string);
};

class Producto{
protected:
    int id;
    string nombre;
    string tipo;
    string marca;
    float precio;
public:
    Producto(int, string, string, string, float);
    void mostrarProducto();
    void mostrarProducto(string detalleAdicional);
};

class ProductoElectronico : public Producto {
private:
    string modelo;
    int year;
public:
    ProductoElectronico(int, string, string, string, float, string, int);
    void mostrarElectronico();
};

class ProductoRopa : public Producto{
private:
    string talla;
    string color;
public:
    ProductoRopa(int, string, string, string, float, string, string);
    void mostrarRopa();
};

Producto::Producto(int _id, string _nombre, string _tipo, string _marca, float _precio){
    id = _id;
    nombre = _nombre;
    tipo = _tipo;
    marca = _marca;
    precio = _precio;
}

ProductoElectronico::ProductoElectronico(int _id, string _nombre, string _tipo, string _marca, float _precio, string _modelo, int _year) : Producto(_id, _nombre, _tipo, _marca, _precio){
    modelo = _modelo;
    year = _year;
}

ProductoRopa::ProductoRopa(int _id, string _nombre, string _tipo, string _marca, float _precio, string _talla, string _color) : Producto(_id, _nombre, _tipo, _marca, _precio){
    talla = _talla;
    color = _color;
}

void Producto::mostrarProducto(){
    cout << endl;
    cout << "El producto es: " << endl;
    cout << "ID: " << id << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Tipo de producto: " << tipo << endl;
    cout << "Marca: " << marca << endl;
    cout << "Precio: " << precio << endl;
}

void Producto::mostrarProducto(string detalleAdicional){
    cout << endl;
    cout << "El producto es: " << endl;
    cout << "ID: " << id << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Tipo de producto: " << tipo << endl;
    cout << "Marca: " << marca << endl;
    cout << "Precio: " << precio << endl;
    cout << "Detalle adicional: " << detalleAdicional << endl;
}

void ProductoElectronico::mostrarElectronico(){
    cout << endl;
    cout << "El electronico es: " << endl;
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo <<endl;
    cout << "Año: " << year << endl;
    cout << "Precio: " << precio << endl;

}

void ProductoRopa::mostrarRopa() {
    cout << endl;
    cout << "La prenda es: " << endl;
    cout << "Marca: " << marca << endl;
    cout << "Talla: " << talla << endl;
    cout << "Color: " << color << endl;
    cout << "Precio: " << precio << endl;
}

int main() {
    ProductoElectronico pe(01, "Teclado Gamer", "Electronico", "Logitech", 2500, "LKP500", 2023);
    ProductoRopa pr(02, "Sudadera", "Ropa", "H&M", 600, "M", "Café");
    pe.mostrarElectronico();
    pr.mostrarRopa();
    pe.mostrarProducto();
    pr.mostrarProducto();
    pe.mostrarProducto("Este teclado es una edición limitada.");
    return 0;
}