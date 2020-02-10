#include <iostream>
#include <set>

using namespace std;

struct Paciente{
	unsigned dni;
	string nombre;
	string apellidos;
	unsigned gravedad;	
	
	Paciente(unsigned un_dni, string un_nombre, string unos_apellidos, unsigned una_gravedad){
		dni = un_dni;
		nombre = un_nombre;
		apellidos = unos_apellidos;
		gravedad = una_gravedad;
	}
	
	bool operator<(const Paciente p1) const
	{
		return gravedad < p1.gravedad;
	}	
	
	bool operator>(const Paciente p1) const
	{
		return gravedad > p1.gravedad;
	}	
	
	bool operator()(const Paciente p1, const Paciente p2) const
	{
		return p1.gravedad < p2.gravedad;
	}	
};

class Pacientes{
private:
	set<Paciente,greater<Paciente>> pacientes;
	
	set<Paciente>::iterator buscar_dni(unsigned dni){
		set<Paciente>::iterator it = pacientes.begin();
		bool encontrado = false;
		while(it != pacientes.end() && !encontrado){
			if(it->dni == dni)
				encontrado = true;
			else
				++it;
		}
		return it;
	}
	
public:
	
	const Paciente & buscar_por_dni(unsigned dni){
		set<Paciente>::iterator it = buscar_dni(dni);
		if(it!=pacientes.end())
			return *it;
	}
	
	void borrar (unsigned dni){
		set<Paciente>::iterator it = buscar_dni(dni);
		pacientes.erase(it);	
	}
	
	void insertar (Paciente & p){
		pacientes.insert(p);	
	}

};

int main(){
	
}



