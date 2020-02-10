#include <list>
#include <iostream>

using namespace std;


template<typename T>
class Vector{
	private:
		list<T> lista;
	public:	
		
		typename list<T>::iterator iterador;
		typename list<T>::const_iterator const_iterador;
		
		Vector(){}
		
		int size(){
			return lista.size();	
		}
		
		T & front(){
			return lista.front();
		}
		
		T & back(){
			return lista.back();	
		}
		
		void push_back(T & elemento){
			lista.push_back(elemento);
		}
		
		void pop_back(){
			lista.pop_back();	
		}
		
		T & operator [] (int x){
			typename list<T>::iterator it;
			if(x>=0 && x<lista.size()){
				it = lista.begin();
				for(int i=0; i<x; i++, it++){}
			}
			else
				it = lista.end();
			return *it;
		}
		
		T & at(int x){
			return this.operator [](x);	
		}
		
		bool empty(){
			return lista.empty();	
		}
		
		void swap(Vector & v){
			lista.swap(v.lista);	
		}
		
		bool operator == (const Vector & v) const{
			return lista == v.lista;
		}
		
		bool operator != (const Vector & v) const{
			return lista != v.lista;
		}
		
		bool operator < (const Vector & v) const{
			return lista < v.lista;
		}
		
		bool operator > (const Vector & v) const{
			return lista > v.lista;
		}
		
		bool operator <= (const Vector & v) const{
			return lista <= v.lista;
		}
		
		bool operator >= (const Vector & v) const{
			return lista >= v.lista;
		}
		
		typename list<T>::iterator begin(){
			return lista.begin();	
		}
		
		typename list<T>::iterator end(){
			return lista.end();	
		}
		
		
};

int main(){
	
}
