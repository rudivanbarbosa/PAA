#include <bits/stdc++.h>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

void subconjuntos(int conjunto[], int n)
{
    ofstream saida("subconjuntos.txt");
    int count = pow(2, n);
    vector <int> captura;
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < n; j++) {

            if ((i & (1 << j)) != 0){
                saida << conjunto[j] << " ";
                }else { saida << 0 << " ";}
            }
        saida << "\n";
    }

}
void deletar(){
    remove("subconjuntos.txt");
    remove("KnapsackProblem.o");
}
mochila(int conjunto[], int valor[], int peso[], int Capacidade, int n){

    int y = pow(2,n);
    subconjuntos(conjunto, n);

ifstream entrada("subconjuntos.txt");
int c[n][y];
for(int j=0; j< y; j++){
    for(int i=0; i< n; i++){

    entrada >> c[i][j];
}
}

int resultado = 0;
int massa = 0;
vector < int > solucoes;
for( int i = 0; i < y; i++){
    for( int j = 0; j < n; j++){

    if(c[j][i] != 0){
        massa =  massa + peso[j];
        resultado = resultado + valor[j];
    }
}
  if (massa <= Capacidade){
    solucoes.push_back(resultado);
    }
    massa = 0;
    resultado = 0;
}

stable_sort(solucoes.begin(), solucoes.end(), greater <int> () );

cout << "Melhor Mochila: " << solucoes.front() << "\n";

}

int main()
{
    int conjunto[] = {1,2,3,4,5,6,7,8,9,10};
    int valor[] = {5,7,6,10,8,3,4,1,7,3};
    int peso[] = {15,18,13,23,9,10,11,5,14,5};
    int capacidade = 100;
    int qitens = sizeof(conjunto)/sizeof(int);

    mochila(conjunto, valor, peso, capacidade, qitens);
    deletar();


    return 0;
}

