#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int minimo(int a, int b){
if(a>b){
    return b;
}
else{return a;}

}


int gdc(int m, int n){

int t = minimo(m,n);
for(int i = t; i<=t; i--){
    if(m%t == 0 & n%t==0){
        printf("O máximo divisor comum entre %d e %d é %d.\n ", m, n, t);
        break;
    }else{t = t-1; }

}
    }

int main(){
setlocale(LC_ALL,"Portuguese");

gdc(31415,14142);


}
