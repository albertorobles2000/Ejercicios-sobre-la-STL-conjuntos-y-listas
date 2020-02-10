#include <iostream>
#include <list>

using namespace std;

template <typename T> //No seria necesario pasarle la lista l
list<T> subset_de_l_dado_por_li(const list<T> & l,const list<typename list<T>::iterator> & li){
	list<T> nueva;
	typename list<typename list<T>::iterator>::const_iterator it;
	for(it = li.cbegin();it != li.end(); it++){
		nueva.push_back(*(*(it)));	
	}
	return nueva;
}

int main(){
	list<int> l;
	for(int i=0; i<60; i++){
		l.push_back(i);	
	}
	
	list<typename list<int>::iterator> li;
	list<int>::iterator it = l.begin();
	for(int i=0; i<10; i++){
		for(int j=i; j<i+5; j++)
			it++;
		li.push_back(it);
	}
	
	list<int> l_sol = subset_de_l_dado_por_li<int>(l,li);
	
	for(it = l_sol.begin();it != l_sol.end(); it++){
		cout << *it << endl;	
	}
}
