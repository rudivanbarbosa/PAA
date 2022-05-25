#include <iostream>


using namespace std;

int FibonacciDP( int vec[], int n)
{

    if(n==0 || n==1)
    {
        return n;
    }
    if(vec[n] >= -1)
        {
             vec[n] = FibonacciDP(vec, n-1) + FibonacciDP(vec, n-2);
        }
    return vec[n];

}


int main()
{

int n = 43;
int vec[n];
for(int i = 0; i < n; i++){ vec[n] = -1;}

cout << FibonacciDP(vec, n) << "\n";



}
