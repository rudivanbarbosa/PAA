#include <iostream>
#include <vector>
#include <cmath>


using namespace std;

float mediamatriz( vector < vector < int > > matriz ){

float soma = 0;

for(int i = 0; i < matriz.size(); i++)
{
    for(int j = 0; j < matriz[0].size(); j++){

        soma += matriz[i][j];
    }

}

return (float)soma/(matriz.size()*matriz[0].size()) ;

}
//C(m,n) = m*n   ( O(m*n)  )
int soma_vetor_dividir( vector<int> v, int inicio, int fim)
{

    if (fim == 1)
    {
        return v[inicio];
    }
    else
    {
        return soma_vetor_dividir(v, inicio, ceil((float)fim/2) ) + soma_vetor_dividir(v,  inicio + ceil((float)fim/2), floor ((float)fim/2) );

    }
}

//C(n) = 2n -1 (   O(n)  )

float mediamatriz_rec( vector < vector < int > > matriz, int inicio, int fim){

float somas = 0;
int C = matriz[0].size();

for( int i = 0; i < matriz.size(); i++){

    somas +=  soma_vetor_dividir(matriz[i], inicio, fim);
}

return (float)somas/(matriz.size()*matriz[0].size()) ;

}

// C(m,n) = m*(2 X(n/2) + 1) = m*(2n -1) ( O(m*n) )


int main()
{

vector < vector < int > > matriz = { {2,2},
                                     {3,3},
                                     {2,2}
                                     };

int n = matriz[0].size();

cout << mediamatriz_rec (matriz, 0, n) << "\n";





}
