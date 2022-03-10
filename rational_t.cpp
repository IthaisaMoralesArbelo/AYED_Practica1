/* AUTOR: Ithaisa Morales Arbelo
* FECHA: 05/02/2022
* EMAIL: alu0101482194@ull.edu.es
* VERSION: 1.0
* ASIGNATURA: Algoritmos y Estructuras de Datos
* PRÁCTICA Nº: 1
* COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
*              "C++ Programming Style Guidelines"
*              https://geosoft.no/development/cppstyle.html
*/

#include "rational_t.hpp"

// Constructor parametrizado.
rational_t::rational_t(const int &numerador, const int &denominador) {
  assert(denominador != 0);
  numerador_ = numerador, denominador_ = denominador;
}

// Destructor
rational_t::~rational_t() {}



// Getter del numerador.
int rational_t::get_num() const {
  return numerador_;
}



// Getter del denominador.
int rational_t::get_den() const
{
  return denominador_;
}



// Setter del numerador.  
void rational_t::set_num(const int &numerador) {
  numerador_ = numerador;
}



// Setter del denominador.   
void rational_t::set_den(const int &denominador) {
  assert(denominador != 0);
  denominador_ = denominador;
}



// Función que devuelve el valor numérico del número racional.
double rational_t::value() const { 
  return double(get_num()) / get_den();
}


// Comparaciones.
// Función que compara si dos números racionales son iguales.
bool rational_t::is_equal(const rational_t &racional, const double precision) const { 
  return ((fabs(value() - racional.value()) < precision) && (fabs(get_den()) != 0 || fabs(racional.get_den()) != 0));
}



// Función que compara si un número racional es mayor que otro.
bool rational_t::is_greater(const rational_t &racional, const double precision) const {
  return ((value() - racional.value() > precision) && (fabs(get_den()) != 0 || fabs(racional.get_den()) != 0));
}



// Función que compara si un número racional es menor a otro.
bool rational_t::is_less(const rational_t &racional, const double precision) const {
  return((value() - racional.value() < (- precision)) && (racional.value() - value() > precision) && (fabs(get_den()) != 0 || fabs(racional.get_den()) != 0));
}


// Operaciones.
// Función que realiza la suma de dos números racionales.
rational_t rational_t::add(const rational_t &racional) {
  return rational_t(get_num() * racional.get_den() + (get_den() * racional.get_num()), get_den() * racional.get_den());
}



// Función que realiza la resta de dos números racionales.
rational_t rational_t::substract(const rational_t &racional) {
  return rational_t(get_num() * racional.get_den() - (get_den() * racional.get_num()), get_den() * racional.get_den());
}



// Función que realiza la multiplicación de dos números racionales.
rational_t rational_t::multiply(const rational_t &racional) {
  return rational_t(get_num() * racional.get_num(), get_den() * racional.get_den());
}



// Función que realiza la división de dos números racionales.
rational_t rational_t::divide(const rational_t &racional) {
  return rational_t(get_num() * racional.get_den(), get_den() * racional.get_num());
}



// Función de escritura a la pantalla.
void rational_t::write(ostream& os) const {
  os << get_num() << "/" << get_den() << "=" << value() << endl;
}



// Función de lectura por teclado.
void rational_t::read(istream& is) {
  cout << "Numerador? ";
  is >> numerador_;
  cout << "Denominador? ";
  is >> denominador_;
  assert(denominador_ != 0);
}
