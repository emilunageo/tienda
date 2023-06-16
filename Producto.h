/*
* Proyecto Tienda Online
* Emiliano Luna George
* A01710584
* 16/10/2023

* En la clase Producto creamos las bases del programa.
* La clase nos permite crear un padre que herede atributos como el nombre, ID, tipo
* marca, precio y para el caso de la sobre carga un detalle adicional, que puede ser
* un comentario que explique que es una edición limitada o una colaboración especial para el
* caso de la ropa.
* En mi opinión es la clase más interesante ya que aquí aplicamos
* conceptos de herencia, sobreescritura, sobrecarga, clases abstractas
* casi todas las competenias requeridas se encuentran en este documento.
*/
#include <iostream>
#include <string>
using namespace std;
/* Clase abstracta Producto */
class Producto {
protected:
    int id;
    string nombre;
    string tipo;
    string marca;
    float precio;
    string detalle_adicional;

public:
    /* Constructores */
    Producto(int _id, string _nombre, string _tipo, string _marca, float _precio)
        : id(_id), nombre(_nombre), tipo(_tipo), marca(_marca), precio(_precio) {}

    /* Construcor con parametro adiconal */
    Producto(int _id, string _nombre, string _tipo, string _marca, float _precio, string _detalle_adicional)
        : id(_id), nombre(_nombre), tipo(_tipo), marca(_marca), precio(_precio), detalle_adicional(_detalle_adicional) {}

    /* 
    * Método virtual puro que debe ser implementado en las clases derivadas
    * mostrarProducto() nos ayuda a mostrar los datos de las clases hijas
    * específicas que queramos, en este caso también tomamos datos bases
    * que son recopilados de la funcion obtenerInformacion()
    * 
    * @param
    * @return
    */
    virtual void mostrarProducto() = 0;

    /*
    * obtenerInformacion() toma como base los atributos del costructor padre
    * y esa misma función será invocada más adelante por los hijos mostrando así
    * lo que yo llamo los datos base: id, nombre, tipo, marca, precio, detalle_adicional
    * (este útlimo en caso de contar con el). 
    * @param
    * @return
    */
    void obtenerInformacion() {
        cout << "Información general del producto:" << endl;
        cout << "ID: " << id << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Tipo: " << tipo << endl;
        cout << "Marca: " << marca << endl;
        cout << "Precio: " << precio << endl;
        cout << "Detalle Adicional: " << detalle_adicional << endl;
    }
};

/* Clase ProductoElectronico */
class ProductoElectronico : public Producto {
private:
    string modelo;
    int year;

public:
    ProductoElectronico(int _id, string _nombre, string _tipo, string _marca, float _precio, string _modelo, int _year)
        : Producto(_id, _nombre, _tipo, _marca, _precio), modelo(_modelo), year(_year) {}
    ProductoElectronico(int _id, string _nombre, string _tipo, string _marca, float _precio, string _detalle_adicional, string _modelo, int _year)
        : Producto(_id, _nombre, _tipo, _marca, _precio, _detalle_adicional), modelo(_modelo), year(_year) {}

    void mostrarProducto(){
        cout << "Producto electrónico:" << endl;
        obtenerInformacion();
        cout << "Modelo: " << modelo << endl;
        cout << "Año: " << year << endl;
    }
};

/* Clase ProductoRopa */
class ProductoRopa : public Producto {
private:
    string talla;
    string color;

public:
    ProductoRopa(int _id, string _nombre, string _tipo, string _marca, float _precio, string _talla, string _color)
        : Producto(_id, _nombre, _tipo, _marca, _precio), talla(_talla), color(_color) {}
    ProductoRopa(int _id, string _nombre, string _tipo, string _marca, float _precio, string _detalle_adicional,  string _talla, string _color)
        : Producto(_id, _nombre, _tipo, _marca, _precio, _detalle_adicional), talla(_talla), color(_color) {}

    void mostrarProducto(){
        cout << "Producto de ropa:" << endl;
        obtenerInformacion();
        cout << "Talla: " << talla << endl;
        cout << "Color: " << color << endl;
    }
};
