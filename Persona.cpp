#include <iostream>
using namespace std;
class Persona{
	// atributos
	public : string nombres,apellidos,direccion, fecha_nacimiento;
				int telefono;
	// costructor
	public : 
		Persona(){
		}
		Persona(string nom,string ape,string dir,string fecha,int tel){
			nombres = nom;
			apellidos = ape;
			direccion = dir;
			telefono = tel;
			fecha_nacimiento = fecha;
		}
	
	// metodos
	void mostrar();
	
};
