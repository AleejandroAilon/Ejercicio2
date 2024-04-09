#include <iostream>
#include <string>}
using namespace std;

class Persona{
	private:
		string nombre, ocupacion;
		int edad;
		
	public:
		// Constructor
		Persona(string n, int e, string o) : nombre(n), edad(e), ocupacion(o){}
		
	// Establecer
	void setNombre(string n){
		nombre = n;
	}
	
	void setEdad(int e){
		edad = e;
	}
	
	void setOcupacion(string o){
		ocupacion = o;
	}
	
	//Obtener
	
	string getNombre() const{
		return nombre;
	}
	
	int getEdad() const{
		return edad;
	}
	
	string getOcupacion() const{
		return ocupacion;
	}
	
	// --------------------------------------
	
	void mostrarInfo() const{
		cout << "Nombre: " << nombre << endl;
		cout << "Edad: " << edad << endl;
		cout << "Ocupacion: " << ocupacion << endl;
	}
};

int main(){
	// Creando los objetos, con ayuda del constructor
	Persona persona1("Rodrigo", 29, "Doctor");
	Persona persona2("Alejandro", 23, "Ingeniero");
	
	cout << "Informacion de Persona 1:" << endl;
	persona1.mostrarInfo();
	cout << endl;
	
	cout << "Informacion de Persona 2:" << endl;
	persona2.mostrarInfo();
	cout << endl;
	
	//Modificación
	persona1.setEdad(41);
	persona1.setOcupacion("Arquitecto");
	
	cout << "Informacion actualizada de Persona 1:" << endl;
	persona1.mostrarInfo();
	
	return 0;
}













