#include"Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona{
  // atributos
  private : string nit;
  // constructor
  public :
  Cliente(){
  }
  Cliente(string nom,string ape,string dir,string fecha,int tel, string n) : Persona(nom,ape,dir,fecha,tel){ 
  nit = n;
  }
  
  // METODOS
  //set (modificar)
  void setNit(string n){nit = n;}
  void setNombres(string nom){nombres = nom;}
  void setApellidos(string ape){apellidos = ape;}
  void setDireccion(string dir){direccion = dir;}
  void setFecha(string fecha){fecha=fecha;}
  void setTelefono(int tel){telefono = tel;}
  //get (mostrar)
  string getNit(){	return nit;}
  string getNombres(){	return nombres;}
  string getApellidos(){	return apellidos;}
  string getDireccion(){	return direccion;}
  string getFecha(){   return fecha_nacimiento;}
  int getTelefono(){	return telefono;}
  
// metodo
void mostrar(){
	cout<<"______________________"<<endl;
	cout<<nit<<","<<nombres<<","<<apellidos<<","<<fecha_nacimiento<<","<<direccion<<","<<telefono<<endl;
}
};
