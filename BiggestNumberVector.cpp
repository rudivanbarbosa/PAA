#include <iostream>
#include <vector>


using namespace std;

BiggestNumberVector(vector < int > v,  int left, int right)
{

    if(right - left == 1){
        return v[left];
    }


    int average = (left + right)/2;


    int left_side = BiggestNumberVector(v, left, average);
    int right_side = BiggestNumberVector(v, average, right);

    if(left_side > right_side)
    {
        return left_side;

    }else { return right_side;}

}

int main()
{

vector < int > v = {1,4, 1, 2, 1};

int n = v.size();


cout << BiggestNumberVector(v, 0, n) << "\n";





}
