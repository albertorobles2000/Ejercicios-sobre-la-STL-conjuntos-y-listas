#include <iostream>
#include <list>

using namespace std;

template<typename T>

void elimina_x (list<T> & lista, T x){

	typename list<T>::iterator it = lista.begin();
	while(it != lista.end()){
		if (*it == x)
			it = lista.erase(it);	
		else
			it++;
	};
}

int main(){
	list<int> lista;
	for(int i=0; i<20; i++){
		lista.push_back(i%5);
	}
	for(typename list<int>::iterator it = lista.begin(); it != lista.end(); it++){
		cout << *it << endl;	
	}
	
	cout << "**********************************************\n";
	cout << "Eliminamos el 2 ******************************\n";
	
	elimina_x<int>(lista,2);
	
	for(typename list<int>::iterator it = lista.begin(); it != lista.end(); it++){
		cout << *it << endl;	
	}
	
}
