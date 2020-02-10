#include <map>
#include <iostream>

using namespace std;

multimap <string, unsigned> map_a_multimap(map<string,unsigned> mapa){
	multimap<string, unsigned> multimapa;
	for(map<string,unsigned>::iterator it = mapa.begin(); it != mapa.end(); it++){
		for(unsigned i=0; i<it->second; i++){
			multimapa.insert(pair <string, unsigned> (it->first, i+1));
		}
	}
	return multimapa;
}

int main(){
	map<string,unsigned> mapa;
	mapa.insert(pair<string,unsigned> ("a",2));
	mapa.insert(pair<string,unsigned> ("b",3));
	mapa.insert(pair<string,unsigned> ("c",2));
	mapa.insert(pair<string,unsigned> ("d",6));
	mapa.insert(pair<string,unsigned> ("e",2));
	
	multimap<string, unsigned> multimapa = map_a_multimap(mapa);
	for(multimap<string,unsigned>::iterator it = multimapa.begin(); it != multimapa.end(); it++){
		cout << "-->" << it->first << " " << it->second << "\n";
	}
	
}
