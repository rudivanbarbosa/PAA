#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int RobotCoinCollection(vector < vector < int > > &F, vector < vector < int > > &C, int n, int m)
{
for( int i = 1; i < n; i++)
{
    F[i][0] = F[i-1][0] + C[i][0];
    for(int j = 1; j < m; j++)
    {
        F[i][j] = max(F[i-1][j], F[i][j-1]) + C[i][j];
    }
}

return F[n-1][m-1];

}



int main()
{

  vector < vector < int > > F = { {0,0,0,0,0,0},
                                  {0,0,0,0,0,0},
                                  {0,0,0,0,0,0},
                                  {0,0,0,0,0,0},
                                  {0,0,0,0,0,0} };

  vector < vector < int > > C = { {0,0,0,0,1,0},
                                  {0,1,0,1,0,0},
                                  {0,0,0,1,0,1},
                                  {0,0,1,0,0,1},
                                  {1,0,0,0,1,0} };

int n =  F.size();
int m =  F[0].size();

F[0][0] = C[0][0];

for( int j = 1; j < m; j++)
{
    F[0][j] = F[0][j-1] + C[0][j];
}

RobotCoinCollection(F, C, n , m);

for(int i = 0; i < n; i++)
{
    for(int j = 0; j < m; j++)
    {
        cout << F[i][j] << " ";
    }
    cout << "\n";
}

}


