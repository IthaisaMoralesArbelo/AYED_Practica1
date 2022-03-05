// AUTOR: Ithaisa Morales Arbelo.
// FECHA: 05/03/2022.
// EMAIL: alu0101482194@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos.
// PRÁCTICA Nº: 1.
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html


#pragma once

#include <iostream>
#include <cassert>
#include <cmath>

# define EPSILON 1e-6

using namespace std;

class rational_t
{
public:
  // Constructor.
  rational_t(const int = 0, const int = 1);
  // Destructor.
  ~rational_t() {}
  
  // Getters.
  int get_num() const;
  int get_den() const;
  
  // Setters.
  void set_num(const int);
  void set_den(const int);

  double value(void) const;

  // Fase II.
  bool is_equal(const rational_t&, const double precision = EPSILON) const;
  bool is_greater(const rational_t&, const double precision = EPSILON) const;
  bool is_less(const rational_t&, const double precision = EPSILON) const;
  
  // Fase III.
  rational_t add(const rational_t&);
  rational_t substract(const rational_t&);
  rational_t multiply(const rational_t&);
  rational_t divide(const rational_t&);
  
  // Método de escritura a la pantalla.
  void write(ostream& = cout) const;

  // Método de lectura por teclado.
  void read(istream& = cin);
  
private:
  int num_, den_;
};
