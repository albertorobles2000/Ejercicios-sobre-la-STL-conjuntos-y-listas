#include <iostream>
#include <cstdlib>
#include <fstream>
#include <map>

using namespace std;

map<string, unsigned> fichero_a_map(char * fichero){
	ifstream fi (fichero);
	if (!fi){
		cerr << "ERROR, No se ha podido abrir: " << fichero;
		exit (1);
	}
	map<string, unsigned> palabras;
	string palabra;
	map<string,unsigned>::iterator iter;
	while( fi >> palabra){
		iter = palabras.find(palabra);
		if(iter == palabras.end())
			palabras[palabra] = 1;
		else
			palabras[palabra] += 1;
			
	}
	
	fi.close();
	
	return palabras;
}

int main(int argc, char ** argv)
{
	if(argc != 2){
		cout << "Debe pasar como parametro el nombre del fichero" << endl;
		exit(0);
	}

	map<string,unsigned> diccionario = fichero_a_map(argv[1]);
	for(map<string,unsigned>::iterator it = diccionario.begin(); it != diccionario.end(); it++)
		cout << "--> " << it->first << "--> " << it->second << endl; 
		
return 0;
}
