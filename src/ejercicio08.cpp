#include <list>
#include <iostream>

using namespace std;

template<typename T>

list<T> inverso(list<T> lista){
	
	list<T> invert;
	for(typename list<T>::reverse_iterator it = lista.rbegin();it != lista.rend(); it++){
		invert.push_back(*it);	
	}
	return invert;
}

int main(){
	list<int> l;
	for(int i=0; i<10; i++)
		l.push_back(i);

	list<int> l_inv = inverso<int>(l);
	
	for(typename list<int>::iterator it = l_inv.begin(); it != l_inv.end(); it++){
		cout << *it << endl;	
	}
}
