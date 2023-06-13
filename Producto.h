#include <iostream>
#include <string>
using namespace std;
class Tienda{
private:
    string nombre;
public:
    Tienda(string);
};

// Clase abstracta ProductoAbstracto
class ProductoAbstracto {
protected:
    int id;
    string nombre;
    string tipo;
    string marca;
    float precio;

public:
    ProductoAbstracto(int _id, string _nombre, string _tipo, string _marca, float _precio)
        : id(_id), nombre(_nombre), tipo(_tipo), marca(_marca), precio(_precio) {}

    // Método virtual puro que debe ser implementado en las clases derivadas
    virtual void mostrarProducto() = 0;

    // Otros métodos comunes a todos los productos
    void obtenerInformacion() {
        cout << "Información general del producto:" << endl;
        cout << "ID: " << id << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Tipo: " << tipo << endl;
        cout << "Marca: " << marca << endl;
        cout << "Precio: " << precio << endl;
    }
    virtual ~ProductoAbstracto() {}
};


// Clase concreta ProductoElectronico
class ProductoElectronico : public ProductoAbstracto {
private:
    string modelo;
    int year;

public:
    ProductoElectronico(int _id, string _nombre, string _tipo, string _marca, float _precio, string _modelo, int _year)
        : ProductoAbstracto(_id, _nombre, _tipo, _marca, _precio), modelo(_modelo), year(_year) {}

    void mostrarProducto() /* override (se usa para específicar que estoy usando sobreescritura) pero no lo corre mi version de c++*/ {
        cout << "Producto electrónico:" << endl;
        obtenerInformacion();
        cout << "Modelo: " << modelo << endl;
        cout << "Año: " << year << endl;
    }
};



// Clase concreta ProductoRopa
class ProductoRopa : public ProductoAbstracto {
private:
    string talla;
    string color;

public:
    ProductoRopa(int _id, string _nombre, string _tipo, string _marca, float _precio, string _talla, string _color)
        : ProductoAbstracto(_id, _nombre, _tipo, _marca, _precio), talla(_talla), color(_color) {}

    void mostrarProducto() /* override (se usa para específicar que estoy usando sobreescritura) pero no lo corre mi version de c++ */ {
        cout << "Producto de ropa:" << endl;
        obtenerInformacion();
        cout << "Talla: " << talla << endl;
        cout << "Color: " << color << endl;
    }
};