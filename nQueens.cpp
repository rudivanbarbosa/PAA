#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void printSequence(vector <int> &v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

bool is_possible(vector <int> &queens, int col )
{
    if(queens.size() == 0)
    {
        return true;
    }else
    {
        for(int i = 0; i < queens.size(); i++)
        {
            if(queens[i] == col)
            {
                return false;
            }
        }
        for(int i = 0; i < queens.size(); i++)
        {
            int row = queens.size();
            int d_col = abs(queens[i] - col);
            int d_row = abs(i - row);

            if(d_col == d_row)
            {
                return false;
            }
        }
    }
return true;

}

void nQueens(vector <int> &queens, int n)
{
    if(queens.size() == n)
    {
        printSequence(queens);
    }else
    {
        for(int i = 0; i < n; i++)
        {
            if(is_possible(queens, i))
            {
                queens.push_back(i);
                nQueens(queens, n);
                queens.pop_back();
            }
        }


    }
}

int main()
{

int n = 4;
vector <int> queens;

nQueens(queens, n);


}
