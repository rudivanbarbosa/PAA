#include <iostream>
#include <algorithm>
#include <locale.h>

using namespace std;



int gcd(int m, int n){

int t = min(m,n);
for(int i = t; i<=t; i--){
    if(m%t == 0 & n%t==0){
        cout << "O máximo divisor comum entre " << m << " e " << n << " é " << t;
        break;
    }else{t = t-1; }

}
    }

int main(){
setlocale(LC_ALL,"Portuguese");

gcd(31415,14142);


}
