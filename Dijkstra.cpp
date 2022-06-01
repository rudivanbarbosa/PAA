#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <iterator>


using namespace std;

int getIndex(vector<int> &v, int K)
{
    auto it = find(v.begin(), v.end(), K);

    if (it != v.end())
    {

        int index = it - v.begin();
        return index;
    }
}

 void addAresta(int v1, int v2, int custo, vector < vector < int > > &arestas )
 {
     arestas[v1][v2] = custo;
 }

int Dijkstra(vector < vector < int > > &matriz, vector < vector < int > > &arestas,  int n )
{

    int M = 0;
    int L;
    vector < int > vetor1;
    vector < int > vetor2;
    vector < int > diff;
    for(int i = 0; i < n; i++ )
    {

        for(int j = 0; j < n; j++ )
        {
            if( i == 0)
            {
                            if(matriz[i][j] >  arestas[i][0]   && arestas[i][j] != 0)
                            {
                                    matriz[i][j] = arestas[i][j];
                            }

            }else
            {
                            if( (matriz[i-1][j] > matriz[i-1][L] + arestas[L][j]) && arestas[L][j] != 0)
                            {
                                    matriz[i][j] = matriz[i-1][L] + arestas[L][j];
                            }else {  matriz[i][j] = matriz[i-1][j];}

            }


        }
            vetor1.push_back(M);
            sort(vetor1.begin(), vetor1.end());
            vetor2 = matriz[i];
            sort(vetor2.begin(), vetor2.end());
            set_difference(vetor2.begin(), vetor2.end(), vetor1.begin(), vetor1.end(), inserter(diff, diff.begin()));
            M = *min_element(diff.begin(), diff.end());
            diff.clear();
            vetor2.clear();
            L = getIndex(matriz[i], M);


    }
    return matriz[n-1][n-1];
}
int main()
{

int n = 7;
int infinito = 10000;

vector < int >  aux(n,0);
vector < vector < int > > arestas(n,aux);

for(int i  = 1; i < n; i++)
{
    aux[i] = infinito;
}
vector < vector < int > > matriz(n,aux);


addAresta(0, 1, 3, arestas);
addAresta(0, 2, 7, arestas);
addAresta(0, 3, 9, arestas);
addAresta(1, 4, 11, arestas);
addAresta(1, 5, 7, arestas);
addAresta(2, 5, 9, arestas);
addAresta(2, 4, 2, arestas);
addAresta(3, 4, 1, arestas);
addAresta(3, 5, 9, arestas);
addAresta(4, 6, 8, arestas);
addAresta(5, 6, 2, arestas);

Dijkstra(matriz, arestas, n );

for(int i  = 0; i < n; i++)
{
    for(int j  = 0; j < n; j++)
    {
       cout << matriz[i][j] << " ";
    }
    cout << "\n";

}



}
