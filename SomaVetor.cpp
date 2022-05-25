#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

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

int main()
{

vector < int > v = {1,2,3,4,5,6,7,8,9,10};

int n = v.size();

cout << soma_vetor_dividir(v, 0, n) << "\n";



}
