#include <iostream>
#include <list>

using namespace std;

template <typename T>
list<T> mezclar(list<T> &l1, list<T> &l2){
	l1.sort();
	l2.sort();
	list<T> l;
	typename list<T>::iterator it1 = l1.begin();
	typename list<T>::iterator it2 = l2.begin();
	while(it1 != l1.end() && it2 != l2.end()){
		if(*it1 < *it2){
			l.push_back(*it1);
			it1++;
		}
		else{
			l.push_back(*it2);
			it2++;	
		}
	}
	
	if(it1 == l1.end()){
		for(;it2 != l2.end(); it2++)	
			l.push_back(*it2);
	}
	else{
		if(it2 == l2.end()){
			for(;it1 != l1.end(); it1++)	
				l.push_back(*it1);
		}
	}
	
	return l;	
}

int main(){
	list<int> l1;
	for(int i=0; i<10; i++)
		l1.push_back(i%3);
	list<int> l2;	
	for(int i=0; i<10; i++)
		l2.push_back(i%4);
	cout << "L1:" << endl;
	for(typename list<int>::iterator it1 = l1.begin(); it1 != l1.end(); it1++){
		cout << *it1 << endl;	
	}
	cout << "L2:" << endl;
	for(typename list<int>::iterator it2 = l2.begin(); it2 != l2.end(); it2++){
		cout << *it2 << endl;	
	}
	
	
	list<int> l = mezclar<int>(l1,l2);	
	cout << "L1 y L2 mezcladas:" << endl;	
	for(typename list<int>::iterator it = l.begin(); it != l.end(); it++){
		cout << *it << endl;	
	}
}




