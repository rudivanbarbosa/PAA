#include <iostream>
#include <vector>
#include <set>

using namespace std;

set < int > quantidade;
set < int >::iterator it;

vector < pair <int, int> > par;

void addpar(int v1, int v2)
	{
		par.push_back(make_pair(v1, v2));
	}


void printPar(){
float a, b, c;
float produto;
int positivo = 0;
int negativo = 0;

for (int i = 0; i< par.size(); i++){
    for(int j = 0; j < par.size(); j++){
        if( i!= j){
            a = par[j].second - par[i].second;
            b = par[i].first - par[j].first;
            c = par[i].first*par[j].second - par[j].first*par[i].second;
            for(int k = 0; k< par.size(); k++){
                if(i != k && j != k){
                   produto  =  a*par[k].first + b*par[k].second - c;
                   if(produto > 0){positivo += 1;}else{negativo += 1;}
                   if(positivo == par.size()-2 || negativo == par.size()-2 ){

                        quantidade.insert(i);
                        quantidade.insert(j);

                   }

                }
            }
            positivo = 0;
            negativo = 0;


                }
            }
        }



for (it = quantidade.begin(); it != quantidade.end(); it++) {
       for (int i=0; i< par.size(); i++){
            if( i == *it){
                cout << par[i].first << " " << par[i].second;

        }

    }
    cout << "\n";
}


}


int main(){

addpar(1,2);
addpar(3,3);
addpar(4,1);
addpar(2,6);
addpar(7,3);
addpar(5,3);

printPar();

}
