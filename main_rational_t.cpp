/**
* AUTOR: Ithaisa Morales Arbelo
* FECHA: 05/03/2022
* EMAIL: alu0101482194@ull.edu.esM
* VERSION: 1.0
* ASIGNATURA: Algoritmos y Estructuras de Datos
* PRÁCTICA Nº: 1
* COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
*              "C++ Programming Style Guidelines"
*              https://geosoft.no/development/cppstyle.html
* COMPILACIÓN: g++ -g rational_t.cpp main_rational_t.cpp -o main_rational_t
*/

#include <iostream>
#include <cmath>

#include "rational_t.hpp"

using namespace std;

int main() {

  // Creación de tres objetos de la clase rational_t
  rational_t a(1, 2), b(3), c;

  cout << "a.value()= " << a.value() << endl;
  cout << "b.value()= " << b.value() << endl;
  cout << "c.value()= " << c.value() << endl;

  cout << "a: ";
  a.write();
  cout << "b: ";
  b.write();

  c.read();
  cout << "c: ";
  c.write();

  // Fase II.
  // Creamos dos objetos de la clase rational_t
  rational_t x(1, 3), y(2, 3);

  // Imprimimos numeradores y denominadores
  x.write();
  y.write();


  // Imprimimos las comparaciones
  cout << "x == y? " << (x.is_equal(y) ? "true" : "false") << endl;
  cout << "x < y? " << (x.is_greater(y) ? "true" : "false") << endl;
  cout << "x > y? " << (x.is_less(y) ? "true" : "false") << endl;

  // Fase III.
  // Suma
  cout << "a + b: ";
  a.add(b).write();
  
  // Resta
  cout << "b - a: ";
  b.substract(a).write();

  // Multiplicación
  cout << "a * b: ";
  a.multiply(b).write();
  
  // División
  cout << "a / b: ";
  a.divide(b).write();
  
  return 0;
}