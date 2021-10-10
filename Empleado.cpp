#include"Persona.cpp"
#include <iostream>
using namespace std;

class Empleado : Persona{
  // atributos
  private : int codigo_empleado;
  private : string puesto;
  // constructor
  public :
  Empleado(){
  }
  Empleado(string nom,string ape,string dir,string fecha,int tel, string puestos, int codigos) : Persona(nom,ape,dir,fecha,tel){ 
  codigo_empleado = codigos;
  puesto = puestos;
  }
  // METODOS
  //set (modificar)
  void setNit(string puestos){puesto = puestos;}
  void setNombres(string nom){nombres = nom;}
  void setApellidos(string ape){apellidos = ape;}
  void setDireccion(string dir){direccion = dir;}
  void setFecha(string fecha){fecha=fecha;}
  void setTelefono(int tel){telefono = tel;}
  void serPuesto(int codigos){codigo_empleado=codigos;}
  //get (mostrar)
  
  string getNombres(){	return nombres;}
  string getApellidos(){	return apellidos;}
  string getDireccion(){	return direccion;}
  string getFecha(){   return fecha_nacimiento;}
  int getTelefono(){	return telefono;}
  // metodo
void mostrar(){
	cout<<"______________________"<<endl;
	cout<<","<<nombres<<","<<apellidos<<","<<fecha_nacimiento<<","<<direccion<<","<<telefono<<","<<codigo_empleado<<","<<puesto<<endl;
}
};
