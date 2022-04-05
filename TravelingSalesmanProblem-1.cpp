#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

ofstream saida("permutacoes.txt");

void troca(int vetor[], int i, int j)
{
	int aux = vetor[i];
	vetor[i] = vetor[j];
	vetor[j] = aux;
}

void permuta(int vetor[], int inf, int sup)
{
	if(inf == sup)
	{
		for(int i = 0; i <= sup; i++)
			saida << vetor[i] << " ";
            saida << "\n";
	}
	else
	{
		for(int i = inf; i <= sup; i++)
		{
			troca(vetor, inf, i);
			permuta(vetor, inf + 1, sup);
			troca(vetor, inf, i);
		}
	}
}


int main(){

int n = 5;
int v[n];
for(int i=0; i<n; i++){ v[i] = i;}

permuta(v, 0, n - 1);





}
