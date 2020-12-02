// CLASE PRODUCTO 

// Programada por Ana Patricia Islas Mainou 
// 28 de noviembre 2020

#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Producto{

    private:
        string nombre;
        float precio;
        string descripcion;
        float descuento;
        float peso;
        float dimensionX;
        float dimensionY;
        float dimensionZ;

    public:
        
        // CONSTRUCTORES

        // default
        Producto(string n, float p, string d, float des,float w, float x, float y, float z){
            nombre = n;
            precio = p;
            descripcion = d;
            descuento = des;
            peso = w;
            dimensionX = x;
            dimensionY = y;
            dimensionZ = z;
        }

        // SETTERS
        void setPrecio(float p){precio = p;}

        // GETTERS
        string getNombre(){return nombre;}
        float getPrecio(){return precio;}
        string getDescripcion(){return descripcion;}
        float getDescuento(){return descuento;}
        float getPeso(){return peso;}
        float getDimensionX(){return dimensionX;}
        float getDimensionY(){return dimensionY;}
        float getDimensionZ(){return dimensionZ;}

        
};

#endif