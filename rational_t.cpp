// AUTOR: Ithaisa Morales Arbelo
// FECHA: 05/02/2022
// EMAIL: alu0101482194@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>
#include <cmath>

#include "rational_t.hpp"

// Constructor parametrizado.
rational_t::rational_t(const int n, const int d)
{
  assert(d != 0);
  num_ = n, den_ = d;
}



// Getter del numerador.
int
rational_t::get_num() const
{
  return num_;
}



// Getter del denominador.
int
rational_t::get_den() const
{
  return den_;
}



// Setter del numerador.  
void
rational_t::set_num(const int n)
{
  num_ = n;
}



// Setter del denominador.   
void
rational_t::set_den(const int d)
{
  assert(d != 0);
  den_ = d;
}



// Función que devuelve el valor numérico del número racional.
double
rational_t::value() const
{ 
  return double(get_num()) / get_den();
}


// Comparaciones.

// Función que compara si dos números racionales son iguales.
bool
rational_t::is_equal(const rational_t& r, const double precision) const
{ 
  return (fabs(this-> value() - r.value()) < precision);
}



// Función que compara si un número racional es mayor que otro.
bool
rational_t::is_greater(const rational_t& r, const double precision) const
{
  return (this-> value() - r.value() > precision);
}



// Función que compara si un número racional es menor a otro.
bool
rational_t::is_less(const rational_t& r, const double precision) const
{
  return((this-> value() - r.value() < (- precision)) && (r.value() - this->value() > precision));
}


// Operaciones.

// Función que realiza la suma de dos números racionales.
rational_t
rational_t::add(const rational_t& r)
{
  return rational_t(this-> get_num() * r.get_den() + (this-> get_den() * r.get_num()), this-> get_den() * r.get_den());
}



// Función que realiza la resta de dos números racionales.
rational_t
rational_t::substract(const rational_t& r)
{
  return rational_t(this-> get_num() * r.get_den() - (this-> get_den() * r.get_num()), this-> get_den() * r.get_den());
}



// Función que realiza la multiplicación de dos números racionales.
rational_t
rational_t::multiply(const rational_t& r)
{
  return rational_t(this-> get_num() * r.get_num(), this-> get_den() * r.get_den());
}



// Función que realiza la división de dos números racionales.
rational_t
rational_t::divide(const rational_t& r)
{
  return rational_t(this->get_num() * r.get_den(), this-> get_den() * r.get_num());
}



// Función de escritura a la pantalla.
void
rational_t::write(ostream& os) const
{
  os << get_num() << "/" << get_den() << "=" << value() << endl;
}



// Función de lectura por teclado.
void 
rational_t::read(istream& is)
{
  cout << "Numerador? ";
  is >> num_;
  cout << "Denominador? ";
  is >> den_;
  assert(den_ != 0);
}
