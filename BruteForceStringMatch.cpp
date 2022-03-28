#include <iostream>
#include <string>

using namespace std;

BruteForceStringMatch(string texto, string padrao){
int n = texto.size();
int m = padrao.size();

for(int i = 0; i < n-m; i++){
    int j = 0;



    while (j < m && texto[j] == padrao[i+j]){

        j = j + 1;
        if( j = m){

            return i;
                }else{return -1;}
    }


}

}

int main(){

string texto = "Urso Branco";
string padrao = "Branco";

cout << "Primeiro caractere que inicia o machting do padrao: " << BruteForceStringMatch(texto,padrao) + 1 ;

}
