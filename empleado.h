#pragma once

#include <string>

using namespace std;

class Empleado{
protected:
  float calificacion;
  int subordinados;
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

  void sumarCalificacion(int);

  operator string() const{
    string calString = to_string(calificacion);
    int decPos = calString.find(".");

    calString = calString.substr(0, decPos+3);
    return string(nombre + " - " + puesto + " | " + calString + "/100");
  }

  bool operator==(Empleado comp){
    if (comp.getNombre() == nombre) {
      return true;
    }else{
      return false;
    }
  }
};
