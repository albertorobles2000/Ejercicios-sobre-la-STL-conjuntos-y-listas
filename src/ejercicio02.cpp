//ejercicio02

#include <map>
#include <iostream>

using namespace std;

string desencripta(string cadena, map<char,char> encrip){
	
	//creamos un diccionario "inverso"
	map<char,char> desencrip;
	map<char,char>::iterator pos;  
	for (pos = encrip.begin(); pos != encrip.end();  ++pos){  
	 desencrip[pos->second] = pos->first;
	}
	
	//Comenzamos a desencriptar
	string cadena_desencriptada;
	map<char,char>::iterator it;
	for(unsigned i=0; i<cadena.size(); i++ ){
		it = desencrip.find(cadena[i]);
		if(it == desencrip.end())
			cadena_desencriptada += cadena[i];
		else
			cadena_desencriptada += it->second;
	}
	return cadena_desencriptada;
}	

int main(){
	map<char,char> diccionario;
	
	for(char i = 'a'; i <= 'z' ; i++){
		diccionario.insert(pair<char, char>(i,i+1)); //A cada letra le sumamos uno
	}
	string cadena = "tpz bmcfsup spcmft";
	
	cout << "\nEncriptado: " << cadena;
	cout << "\nDesencrptado: " << desencripta(cadena,diccionario) << endl;
}

