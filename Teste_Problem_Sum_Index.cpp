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

bool is_possible(vector<int> &v, int n, int i)
{
    int somaPAR = 0;
    int somaIMPAR = 0;

    if(v.size() < n)
    {
        if(v.size()%2 == i%2)
        {
            return true;
        }else{ return false;}

    }else{

    for(int j = 0; j < v.size(); j++ )
    {
        if(j%2 == 0){
            somaPAR += v[j];
        }else{ somaIMPAR += v[j];}

    }
    if( v.size()%2 == 0 &&  i%2 == 0 )
    {
        somaPAR += i;
    }
    else if( v.size()%2 == 1 &&  i%2 == 1 )
    {
        somaIMPAR += i;
    }
    else{ return false;}

    if( somaPAR >= somaIMPAR)
    {
        return false;
    }


        }

 return true;
}

void Problem_Sum_Index(vector<int> &v, int n)
{
    if(v.size() == n + 1)
    {
        printSequence(v);
    }else{

        for(int i = 1; i <= 5*n; i++)
        {
            if(is_possible(v,n, i))
            {
                v.push_back(i);
                Problem_Sum_Index(v,n);
                v.pop_back();
            }
        }

    }

}

int main()
{
int n =  1;

vector < int > v;

Problem_Sum_Index(v, n);

}
