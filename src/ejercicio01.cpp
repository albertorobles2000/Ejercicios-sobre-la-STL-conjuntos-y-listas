//ejercicio_1

#include <map>
#include <iostream>

using namespace std;

string encripta(string cadena, map<char,char> encrip){
	string cadena_encriptada;
	map<char,char>::iterator it;
	for(unsigned i=0; i<cadena.size(); i++ ){
		it = encrip.find(cadena[i]);
		if(it == encrip.end()) // Si no existe la letra en el diccionario
			cadena_encriptada += cadena[i];
		else
			cadena_encriptada += it->second;
	}
	return cadena_encriptada;
}

int main(){
	map<char,char> diccionario;
	
	for(char i = 'a'; i <= 'z' ; i++){
		diccionario.insert(pair<char, char>(i,i+1)); //A cada letra le sumamos uno
	}
	string cadena = "soy alberto robles";
	
	cout << "\nDesencriptado: " << cadena;
	cout << "\nEncrptado: " << encripta(cadena,diccionario) << endl;
}
