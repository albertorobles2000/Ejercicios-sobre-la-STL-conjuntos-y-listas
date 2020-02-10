#include <list>
#include <iostream>

using namespace std;

template<typename T>
void elimina_duplicados(list<T> & lista){
	
	for(typename list<T>::iterator it = lista.begin(); it != lista.end(); it++){
		typename list<T>::iterator iter = it;
		iter++;
		while(iter != lista.end()){
			if(*it == *iter)
				iter = lista.erase(iter);
			else
				iter++;
		
		}	
	}
	
}

int main(){
	list<int> lista;
	for(int i=0; i<50; i++){
		lista.push_back(i%20);
	}
	for(typename list<int>::iterator it = lista.begin(); it != lista.end(); it++){
		cout << *it << endl;	
	}
	
	cout << "**********************************************\n";
	
	elimina_duplicados<int>(lista);
	
	for(typename list<int>::iterator it = lista.begin(); it != lista.end(); it++){
		cout << *it << endl;	
	}
	
}



