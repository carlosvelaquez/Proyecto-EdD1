#include "empleado.h"

Empleado::Empleado(){
  calificacion = 0;
  nombre = "Sin Nombre";
  puesto = "-";
}

Empleado::Empleado(string nNombre, string nPuesto){
  calificacion = 0;
  nombre = nNombre;
  puesto = nPuesto;
}

Empleado::Empleado(string nNombre, string nPuesto, double nCal){
  calificacion = nCal;
  nombre = nNombre;
  puesto = nPuesto;
}

float Empleado::getCalificacion(){
  return calificacion;
}

void Empleado::setCalificacion(float nCal){
  calificacion = nCal;
}

string Empleado::getNombre(){
  return nombre;
}

string Empleado::getPuesto(){
  return puesto;
}

void Empleado::setNombre(string nStr){
  nombre = nStr;
}

void Empleado::setPuesto(string nStr){
  puesto = nStr;
}

void Empleado::sumarCalificacion(int nCal){
  int oldCal = calificacion;
  calificacion = ((oldCal*subordinados) + nCal)/(subordinados + 1);
  subordinados ++;
}
