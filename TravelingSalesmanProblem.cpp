#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <math.h>

using namespace std;

float auxilar = 100000;

vector < int > caminhos;

void troca(int vetor[], int i, int j)
{
	int aux = vetor[i];
	vetor[i] = vetor[j];
	vetor[j] = aux;
}

void permuta(int vetor[], int inf, int sup, int n)
{

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

vector < float > custos_caminhos;

	if(inf == sup)
	{
		for(int i = 0; i <= sup; i++)
			caminhos.push_back(vetor[i]);
			caminhos.push_back(vetor[0]);

        for(int j=0; j<n; j++){
            custo = custo + matriz_distancias[caminhos[j]][caminhos[j+1]];
        }
        if(auxilar > custo){
            auxilar = custo;
        }
        cout << auxilar << "\n";
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
int v[n];
for(int i=0; i<n; i++){ v[i] = i;}

permuta(v, 0, n - 1, n);



}
