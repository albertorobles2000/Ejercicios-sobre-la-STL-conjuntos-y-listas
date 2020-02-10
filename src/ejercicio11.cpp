#include <list>
#include <iostream>

using namespace std;

void inserta_menos_uno (list<int> & lista, int x){
	
	list<int>::iterator it = lista.begin();
	while(it!=lista.end()){
		if(*it == x){
			it++;
			lista.insert(it,x-1);
		}
		if(it!=lista.end())
			it++;
	}
}

int main(){
	list<int> lista;
	for(int i=0; i<20; i++)
		lista.push_back(i%4);
	
	inserta_menos_uno(lista,3);	
		
	for(typename list<int>::iterator it = lista.begin(); it != lista.end(); it++){
		cout << *it << endl;	
	}
}
