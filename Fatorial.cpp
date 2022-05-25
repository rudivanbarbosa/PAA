#include <iostream>
#include <vector>


using namespace std;

fatorial(int n){

if( n <= 1){
    return 1;
}else{ return n*fatorial(n-1); }


}


int main()
{

int n = 5;

cout << fatorial(n) << "\n";






}
