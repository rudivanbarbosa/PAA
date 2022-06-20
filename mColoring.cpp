#include <iostream>
#include <vector>


using namespace std;

void printSequence(vector <int> &selection)
{
    for(int i = 0; i < selection.size(); i++)
    {
        if(selection[i] == 0)
        {
            cout << " R ";
        }
        else if(selection[i] == 1)
        {
            cout << " G ";
        }else{ cout << " B ";}

    }
    cout << "\n";
}

bool is_possible(vector < vector < int > > &v, vector < int > &selection, int m, int i)
{

if(selection.size() == 0)
{
    return true;
}else{

int j = selection.size();

for(int k = 0; k < selection.size(); k++)
{
    if( v[j][k] != 0)
    {
        if(selection[k] == i)
        {
           return false;
        }
    }
}
return true;
    }

}

void mColoring(vector < vector < int > > &v, vector < int > &selection, int m)
{

    if(selection.size() == v.size())
    {
        printSequence(selection);
    }else
    {
        for(int i = 0; i < m; i++)
        {
            if(is_possible(v, selection, m,  i))
            {
                selection.push_back(i);
                mColoring(v, selection, m);
                selection.pop_back();

            }
        }

    }


}

void mColoring(vector < vector < int > > &v, int m)
{
     vector < int > selection;
     mColoring(v, selection, m);

}

int main()
{

int  m = 3;
vector < vector < int >  > graph = { {0,1,0,1},
                                     {1,0,1,0},
                                     {0,1,0,1},
                                     {1,0,1,0}
                                                };

 mColoring(graph, m);

}
