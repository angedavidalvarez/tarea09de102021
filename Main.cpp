#include"Cliente.cpp"
#include"Empleado.cpp"

#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion,fecha,puesto;
	int telefono,codigo;
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese su fecha de Nacimiento: ";
	cin>>fecha;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	cout<<"Ingrese Codigo del empleado: ";
	cin>>codigo;
	cout<<"Ingrese el Puesto del Emleado: ";
	cin>>puesto;
	// instanciar un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,fecha,telefono,nit);
	obj.mostrar();
	cout<<"Ingrese Nit: ";
	cin>>nit;
	obj.setNit(nit);
	obj.mostrar();

}
