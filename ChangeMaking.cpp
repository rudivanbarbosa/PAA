#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int ChangeMaking(vector <int>& D, vector <int> &F, int n, int m)
{
int temp;
int j;

for(int i = 1; i <= n; i++)
{
    temp = 1000000;
    j = 1;
    while( j <= m && i >= D[j-1]){
        temp = min(F[i-D[j-1] ], temp);
        j = j + 1;
    }

    F[i] = temp + 1;
}
return F[n];

}



int main()
{
int n = 6;
int m = 3;
vector < int > D = {1,3,4};
vector < int > F;
for(int i = 0; i <= n; i++)
{
    if(i == 0)
    {
        F.push_back(0);
    }else{F.push_back(-1);}
}



ChangeMaking(D,F,n,m);

for (int i = 0; i <= n; i++)
{
    cout << F[i] << " ";
}




}
