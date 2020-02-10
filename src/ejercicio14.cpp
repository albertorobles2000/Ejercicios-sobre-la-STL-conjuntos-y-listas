#include <list>
#include <vector>
#include <iostream>

using namespace std;

template<typename T>

class vdisperso{
	private:
		list<pair<int, T>> coeficientes;
		int n;
		T nulo = 0;
	public:
		vdisperso(const vector<T> & vector){
			
			n = vector.size();
			for(int i=0; i<n; i++){
				if(vector[i] != nulo)
					coeficientes.push_back(pair<int,T> (i,vector[i]));
			}
		}
		
		void asignar_coeficiente(int pos,const T &x){
			typename list<pair<int, T>>::iterator it = coeficientes.begin();
			bool insertado = false;
			while(it != coeficientes.end() && !insertado){
				if(it->first >= pos){
					coeficientes.insert(it,pair<int,T>(pos,x));
					insertado = true;	
				}
				it++;
			}
			if(!insertado)
				coeficientes.push_back(pair<int,T>(pos,x));
			
		}
		
		vector<T> convertir(){
			vector<T> vector;
			typename list<pair<int, T>>::iterator it_lis = coeficientes.begin();
			for(int i=0; i<n; i++){
				if(it_lis->first == i){
					vector.insert(vector.begin()+i,it_lis->second);
					it_lis++;	
				}
				else
					vector.insert(vector.begin()+i,nulo);
			}
			return vector;
		}
		

};

int main(){
	vector<int> vector;
	for(int i=0; i<100; i++){
		if(i%5 == 0)
			vector.insert(vector.begin()+i,i);
		else
			vector.insert(vector.begin()+i,0);
	}
	vdisperso<int> vector_dis(vector);
	vector_dis.asignar_coeficiente(3,1000);
	vector = vector_dis.convertir();
	
	for(unsigned i=0; i<vector.size(); i++){
		cout << vector[i] << endl;
	}
}
