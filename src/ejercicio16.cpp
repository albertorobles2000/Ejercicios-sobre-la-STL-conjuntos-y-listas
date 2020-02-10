#include <list>
#include <iostream>

using namespace std;

template<typename T>
list<pair<T,int>> comprimir (const list<T> & lista){
	list<pair<T,int>> nueva;
	typename list<T>::const_iterator it = lista.begin();
	T elemento;
	int apariciones;
	while(it != lista.end()){
		elemento = *it;
		apariciones = 1;
		it++;
		while(it != lista.end() && *it == elemento){
			apariciones++;
			it++;
		}
		nueva.push_back(pair<T,int>(elemento,apariciones));
	};
	return nueva;
}
template<typename T>
list<T> descomprimir (const list<pair<T,int>> & lista){
	list<T> nueva;
	for(typename list<pair<T,int>>::const_iterator it=lista.begin() ; it!=lista.end(); it++){
		for(int i=0; i<it->second; i++)
			nueva.push_back(it->first);	
	}
	return nueva;
}

int main(){
	list<int> lista;
	for(int i=0; i<70; i++){
		if(i<10)
			lista.push_back(1);
		else{
			if(i<30)
				lista.push_back(4);
			else{
				if(i<50)
					lista.push_back(7);
				else
					lista.push_back(4);
			}
		}
	}
	
	cout << "Lista comprimida: \n";
	list<pair<int,int>> lista_doble = comprimir<int>(lista);
	for(typename list<pair<int,int>>::iterator it=lista_doble.begin() ; it!=lista_doble.end(); it++){
		cout << "(" << it->first << "," << it->second << ")\n";
	}
	
	cout << "\nLista descomprimida: \n";
	lista = descomprimir<int>(lista_doble);
	for(typename list<int>::iterator it=lista.begin() ; it!=lista.end(); it++){
		cout << "(" << *it << ")";
	}
	cout << endl;
}
