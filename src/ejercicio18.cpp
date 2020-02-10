#include <iostream>
#include <vector>

using namespace std;

template<typename T>

void intecalar(vector<T> &v, vector<pair<int, T>> pos){
	int contador = 0;
	for(typename vector<pair<int, T>>::iterator it = pos.begin(); it != pos.end(); ++it){
			int posicion= it->first+contador;
			if(posicion>(int)v.size())
				posicion = v.size();
			v.insert(v.begin()+posicion,it->second);
			contador++;
	}
}

int main(){
	vector<int> v;
	for(int i=0; i<20; i++)
		v.push_back(i);
		
	vector<pair<int,int>> pos;	
	for(int i=0; i<24; i= i+2){
			pos.push_back(pair<int,int>(i,9999));
	}
	
	intecalar<int>(v,pos);
	
	for(vector<int>::iterator it = v.begin();it != v.end() ;it++)
		cout << *it << endl;

}
