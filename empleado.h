#pragma once

#include <string>

using namespace std;

class Empleado{
protected:
  float calificacion;
  string nombre;
  string puesto;

public:
  Empleado();
  Empleado(string, string);

  float getCalificacion();
  void setPosicion(double);
  void setCalificacion(float);

  string getNombre();
  string getPuesto();

  void setNombre(string);
  void setPuesto(string);

  operator string() const{
    return nombre;
  }
};
