#include <iostream>
#include <map>

using namespace std;

struct Coordenada{
	float x;
	float y;	

	Coordenada(float x1, float y1){
		x = x1;
		y = y1;	
	}
	
	bool operator<(const Coordenada & c2) const
	{ 
		return x < c2.x || (x == c2.x && y < c2.y); 
	} 
	
	bool operator()(const Coordenada & c1, const Coordenada & c2) const 
	{ 
		return c1.x < c2.x || (c1.x == c2.x && c1.y < c2.y); 
	} 
};

int main(){
	map<Coordenada,unsigned> conjunto;
	map<Coordenada,unsigned>::iterator it;
	float x,
			y;
	cout << "Intruzca -9999 en x para terminar\n";
	cout << "Introduzca el valor de x: \n";
	cin >> x;
	while(x != -9999){
		cout << "Introduzca el valor de y: \n";
		cin >> y;
		Coordenada c(x,y);
		it = conjunto.find(c);
		if(it == conjunto.end())
			conjunto.insert(pair<Coordenada,unsigned>(c,1));
		else
			it->second++;
		
		cout << "Introduzca el valor de x: \n";
		cin >> x;
	}
	
	for(it = conjunto.begin(); it!=conjunto.end(); it++)
		cout << "Coordenadas: [" << it->first.x << "," << it->first.y << "] Apariciones: " << it->second << endl;
	
}
