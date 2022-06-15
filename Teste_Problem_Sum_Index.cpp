#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printSequence(vector<int> &v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

bool is_possible(vector<int> &v, int n)
{
    int somaPAR = 0;
    int somaIMPAR = 0;

    for(int i = 0; i < v.size(); i++)
    {
        if( i%2 == 0 )
        {
            if(v[i]%2 == 1)
            {
                return false;
            }

        }

        if( i%2 == 1 )
        {
            if(v[i]%2 == 0)
            {
                return false;
            }
        }
    }
    for(int i = 0; i < n + 1; i++ )
    {
        if(i%2 == 0){
            somaPAR += v[i];
        }else{ somaIMPAR += v[i];}

    }
    if( somaPAR >= somaIMPAR)
    {
        return false;
    }
 return true;
}

void Problem_Sum_Index(vector<int> &v, int n)
{
    if(is_possible(v,n))
    {
        printSequence(v);
    }else{

        for(int i = 0; i< v.size(); i++)
        {
            if( i%2 == 0 )
                {
                    if(v[i]%2 == 1)
                    {
                       v[i] += 1;
                    }
                }
            if( i%2 == 1)
            {
                if(v[i]%2  == 1)
                {
                    v[i] += 2;
                }else{
                    v[i] += 1;
                }

            }

        }
        if(find(v.begin(), v.end(), 5*n+1)!=v.end())
        {
            cout << "NO SOLUTION\n";
            return;
        }
        Problem_Sum_Index(v, n);
        }
}


int main()
{
int n = 3 ;

vector < int > v(n+1);
for(int i = 0; i < n +1; i++)
{
    v[i] = i + 1;
}

Problem_Sum_Index(v, n);

}
