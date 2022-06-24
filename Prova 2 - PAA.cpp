#include <iostream>
#include <vector>

using namespace std;

void printSequence(vector<int> &v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}


int Fibonnaci_recursivo(int n)
{
    if( n == 0 || n == 1)
    {
        return n;
    }else
    {
        return Fibonnaci_recursivo(n-1) + Fibonnaci_recursivo(n-2);
    }
}

int Fibonacci_dinamico( vector < int > &vec, int n)
{

    if(n==0 || n==1)
    {
        return n;
    }
    if(vec[n] >= -1)
    {
        vec[n] = Fibonacci_dinamico(vec, n-1) + Fibonacci_dinamico(vec, n-2);
    }
    return vec[n];

}

bool is_possible(vector <int> &v, int i)
{
    if(v.size() == 0)
    {
        return true;
    }else
    {
        for( int j = 0; j < v.size() ; j++)
        {
                if(i%v[j] != 0)
                {
                    return false;
                }
        }

     }


return true;
}

void questao5( vector <int> &v, int n)
{
    if(v.size() == n + 1)
    {
        printSequence(v);
    }
    else{
        for(int i = 3; i <= 3*n; i++)
        {
            if(is_possible(v, i))
            {
                v.push_back(i);
                questao5(v, n);
                v.pop_back();

            }

        }
      }

}

void questao5(int n)
{
    vector < int > v;
    questao5(v, n);

}

int main()
{

int n = 9;
vector < int > vec(n, -1);

//cout << Fibonnaci_recursivo(n) << "\n";
//cout << Fibonacci_dinamico(vec, n) << "\n";


questao5(3);




}
