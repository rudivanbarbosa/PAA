#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <math.h>

using namespace std;

vector < int > caminhos;

BubbleSort( float vetor[], int n){

 for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
    float aux;
    if(vetor[i] <= vetor[j]){
        aux = vetor[j];
        vetor[j] = vetor[i];
        vetor[i] = aux;
    }
        }
            }
 cout << vetor[0] << "\n";
}

int fatorial(int n)
{
    if (n > 1)
        return fatorial(n-1) * n;
    return 1;
}

void troca(int vetor[], int i, int j)
{
	int aux = vetor[i];
	vetor[i] = vetor[j];
	vetor[j] = aux;
}

void permuta(int vetor[], int inf, int sup, int n)
{
int M = fatorial(n);
ifstream dados("dados.txt");
float matriz_dados[n][2];

for(int i=0; i<n; i++){
    for(int j=0; j<2; j++){
    dados >> matriz_dados[i][j];
}

}

float matriz_distancias[n][n];
for (int i=0; i<n; i++){
    for (int j=0; j<n; j++){

    matriz_distancias[i][j] = sqrt( ( matriz_dados[i][0] -  matriz_dados[j][0])*( matriz_dados[i][0] -  matriz_dados[j][0]) +
                                    ( matriz_dados[i][1] -  matriz_dados[j][1])*( matriz_dados[i][1] -  matriz_dados[j][1])    );
}

}

int custo = 0;
ofstream saida("resultados.txt",ios::app);
vector < float > custos_caminhos;

	if(inf == sup)
	{
		for(int i = 0; i <= sup; i++)
			caminhos.push_back(vetor[i]);
			caminhos.push_back(vetor[0]);

        for(int j=0; j<n; j++){
            custo = custo + matriz_distancias[caminhos[j]][caminhos[j+1]];
        }
        saida << custo << "\n";
        caminhos.clear();
	}
	else
	{
		for(int i = inf; i <= sup; i++)
		{
			troca(vetor, inf, i);
			permuta(vetor, inf + 1, sup, n);
			troca(vetor, inf, i);
		}
	}

}


int main(){


int n = 5;
int M = fatorial(n);
float solucao[M];
int v[n];
for(int i=0; i<n; i++){ v[i] = i;}

permuta(v, 0, n - 1, n);
ifstream leitura("resultados.txt");
for(int i = 0; i< M; i++){
    leitura >> solucao[i];
}

BubbleSort(solucao, M);




}
