#include <iostream>
#include <math.h>

using namespace std;

int CoinRow(int C[], int F[], int n)
{

for(int i = 2; i < n; i++)
{
    F[i] = max(C[i] + F[i-2], F[i-1]);
}
return F[n-1];

}



int main()
{

int n = 7;
int C[n] = {0,5,1,2,10,6,2};
int F[n];

F[0] = 0;
F[1] = C[1];

cout << CoinRow(C, F, n) << "\n";




}
