#include <iostream>
#include <locale.h>

using namespace std;

int gcd(int m, int n){
int a = m ;
int b = n;
int r;
if(n == 0){
cout << "O m�ximo divisor comum entre " << m << "e " << n << " � " << " " <<n;
}
do{

r = m%n;
m = n;
n = r;

    }while(n != 0);

cout << "O m�ximo divisor comum entre " << a<< "e " << b << " � " << " " << m;

}
int main(){
setlocale(LC_ALL,"Portuguese");

gcd(31415,14142);

}
