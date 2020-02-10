#include <iostream>
#include <list>

using namespace std;

template<typename T>

bool contenida(const list<T> &l1, const list<T> &l2){
	typename list<T>::const_iterator dos = l2.begin();
	bool encontrada = false;
	for(typename list<T>::const_iterator uno = l1.begin() ;!encontrada && uno != l1.end(); uno++){
		
		if(*uno == *dos){
		
			typename list<T>::const_iterator aux1 = uno; aux1++;
			typename list<T>::const_iterator aux2 = dos; aux2++;
			while(!encontrada && aux1 != l1.end()){
				if(*aux1 != *aux2)
					aux1++;
				else{
					aux1++;
					aux2++;	
				}
			
				if(aux2 == l2.end())
					encontrada = true;
			}
		}
	}

	return encontrada;
}

int main(){
	list<int> l;
	for(int i=0; i<10; i++)
		l.push_back(i);
		
	list<int> l1;
	for(int i=3; i<6; i = i+2)
		l1.push_back(i);
		
	if(contenida<int>(l,l1))
		cout << "l contiene a l1\n";	
	else
		cout << "l no contiene a l1\n";


}
