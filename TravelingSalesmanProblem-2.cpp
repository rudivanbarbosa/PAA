#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

int fatorial(int n)
{
    if (n > 1)
        return fatorial(n-1) * n;
    return 1;
}

int main(){

int n = 5;
int M = fatorial(n);

int matriz_custo[n][n] = { {0,22,50,48,29},
                           {22,0,30,34,32},
                           {50,30,0,22,23},
                           {48,34,22,0,35},
                           {29,32,23,35,0} };

ifstream entrada("permutacoes.txt");
int permutacoes[M][n+1];

for(int i=0; i< M; i++){
    for(int j=0; j<n+1; j++){
    if(j < n){
        entrada >> permutacoes[i][j];
    }else{
        permutacoes[i][j] = permutacoes[i][0];
    }


}

}

int custo = 0;

vector < int > custos_caminhos;

for(int i=0; i< M-1; i++) {
    for(int j=0; j<n+1; j++){
        custo = custo + matriz_custo[permutacoes[i][j]][permutacoes[i][j+1]];
    }
    custos_caminhos.push_back(custo);
    custo = 0;
}

stable_sort(custos_caminhos.begin(), custos_caminhos.end(), greater <int> () );
cout << "Custo do Ciclo Otimo: " << custos_caminhos.back() << "\n";



}
