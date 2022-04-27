#include <iostream>
#include <vector>
#include<algorithm>
#include<iterator>
#include<stdlib.h>

using namespace std;


int FakeCoin(vector<int> moedas){

vector < int > aux;

int peso1 = 0;
int peso2 = 0;
int n = moedas.size()/2;
int s = moedas.size();
for(int l=0; l< s; l++){

    cout << moedas[l] << " ";
}
cout << "\n";
if(s == 2){

    peso1 = moedas[0];
    peso2 = moedas[1];

    if( peso1 < peso2 ){cout << peso2 << "\n"; return 0;}
    else if(peso1 > peso2){cout << peso1 << "\n"; return 0;}
    else if(peso1 == peso2){cout << "Nao existe moeda falsa" << "\n"; return 0;}

}
else if(s%2 == 0 && s != 2){

for(int i = 0; i < n; i++){ peso1 += moedas[i];}
for(int j = n; j < s; j++){ peso2 += moedas[j];}

   if(peso1 < peso2){
        for(int i = n; i < s; i++){aux.push_back( moedas[i]);}
        moedas.clear();
        copy(aux.begin(), aux.end(), back_inserter(moedas));

}else{
for(int j = 0; j < n; j++){aux.push_back( moedas[j]);}
moedas.clear();
copy(aux.begin(), aux.end(), back_inserter(moedas));

}
peso1 = 0;
peso2 = 0;
aux.clear();
}else{

for(int i = 0; i < n; i++){ peso1 += moedas[i];}
for(int j = n+1; j < s; j++){ peso2 += moedas[j]; }

if(peso1 == peso2 ){ return 0;}

else if(peso1 < peso2){
        for(int i = n+1; i < s; i++){
            aux.push_back( moedas[i]);
        }
moedas.clear();
copy(aux.begin(), aux.end(), back_inserter(moedas));


}else if ( peso1 > peso2){
for(int j = 0; j < n; j++){aux.push_back( moedas[j]);}
moedas.clear();
copy(aux.begin(), aux.end(), back_inserter(moedas));

}

peso1 = 0;
peso2 = 0;
}
aux.clear();
FakeCoin(moedas);

}



int main(){

vector < int > moedas = {1,1,1,2,1,1,1,1,1,1};
FakeCoin(moedas);





}
