#include <list>
#include <iostream>

using namespace std;

template<typename T>

void inverso(list<T> & lista){
	typename list<T>::iterator it = lista.begin();
	typename list<T>::reverse_iterator r_it = lista.rbegin();
	unsigned mitad = lista.size()/2;
	for(unsigned contador = 0;contador < mitad; it++, r_it++, contador++){
		T aux = *it;
		*it = *r_it;
		*r_it = aux; 
		
	}
}

int main(){
	list<int> l;
	for(int i=0; i<10; i++)
		l.push_back(i);

	inverso<int>(l);
	
	for(typename list<int>::iterator it = l.begin(); it != l.end(); it++){
		cout << *it << endl;	
	}
}
