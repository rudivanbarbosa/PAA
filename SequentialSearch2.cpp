#include <iostream>
#include <locale.h>


using namespace std;

SequentialSearch2(int X[], int K, int n){
int i = 0;
while (X[i] != K ){
   i = i + 1;
}
if(i < n ){return i;}else{ return -1;}

}


int main(){
setlocale(LC_ALL,"Portuguese");


int A[] = {1,23,4,5,7,9,12,14,17,11,18,20,25};
int tam = sizeof(A)/sizeof(int);
int encontrar = 25;



cout << "O valor procurado está na posição:  " << SequentialSearch2(A, encontrar, tam) + 1  << "\n";



}
