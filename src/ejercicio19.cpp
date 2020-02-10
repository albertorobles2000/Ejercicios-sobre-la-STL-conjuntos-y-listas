#include <iostream>
#include <map>

using namespace std;

struct Piloto{
		string nombre;
		string apellido;
		unsigned pos_clasificacion;
		string escuderia;	
		
		Piloto(string nom, string ape, unsigned pos, string escud){
			nombre = nom;
			apellido = ape;
			pos_clasificacion = pos;
			escuderia = escud;
		}
};

class Pilotosf1{
	private:
		map<string,Piloto> pilotos;
	public:
		void inserta_piloto(Piloto & nuevo){
			pilotos.insert(pair<string,Piloto>(nuevo.apellido ,nuevo));	
		}
		
		map<string,Piloto>::iterator buscar_apellido(string apellido){
			return pilotos.find(apellido);
		}

		map<string,Piloto>::iterator buscar_nombre(string nombre){
			map<string,Piloto>::iterator it = pilotos.begin(); 
			bool encontrado = false;
		
			while(it!= pilotos.end() && !encontrado){
				if((it->second).nombre == nombre)
					encontrado = true;	
				else
					++it;
			}
			
			return it;
		}

		map<string,Piloto>::iterator buscar_escuderia(string escuderia){
			map<string,Piloto>::iterator it = pilotos.begin(); 
			bool encontrado = false;
		
			while(it!= pilotos.end() && !encontrado){
				if((it->second).escuderia == escuderia)
					encontrado = true;	
				else
					++it;
			}
			
			return it;
		}

		map<string,Piloto>::iterator buscar_clasificacion(unsigned pos_clasificacion){
			map<string,Piloto>::iterator it = pilotos.begin(); 
			bool encontrado = false;
		
			while(it!= pilotos.end() && !encontrado){
				if((it->second).pos_clasificacion == pos_clasificacion)
					encontrado = true;	
				else
					++it;
			}
			
			return it;
		}
};

int main(){
	Piloto uno("uno","a",3,"a1");
	Piloto dos("dos","b",4,"a2");
	Piloto tres("tres","c",1,"a3");
	Piloto cuatro("cuatro","d",2,"a4");
	
	Pilotosf1 pilotos;
	
	pilotos.inserta_piloto(uno);
	pilotos.inserta_piloto(dos);
	pilotos.inserta_piloto(tres);
	pilotos.inserta_piloto(cuatro);
	
	cout << pilotos.buscar_apellido("b")->first << endl;
	cout << pilotos.buscar_nombre("uno")->first << endl;
	cout << pilotos.buscar_clasificacion(2)->first << endl;
	cout << pilotos.buscar_escuderia("a3")->first << endl;
	
}
