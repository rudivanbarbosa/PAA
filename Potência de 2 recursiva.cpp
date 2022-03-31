#include <iostream>

using namespace std;

int pot2(int n){

if(n == 0) { return 1;
}else{
    return pot2(n-1)+pot2(n-1);
    }
}

int main(){
int n = 10;

cout << "Potencia de 2 elevado a " << n << ": " << pot2(n);


}
