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
int a = m ;
int b = n;
int r;
if(n == 0){

    printf("O m�ximo divisor comum entre %d e %d � %d", m,n, n);
}
do{

r = m%n;
m = n;
n = r;

    }while(n != 0);

printf("O m�ximo divisor comum entre %d e %d � %d", a,b, m);

}
int main(){
setlocale(LC_ALL,"Portuguese");

gdc(31415,14142);

}
