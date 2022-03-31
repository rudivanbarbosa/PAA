#include <iostream>

using namespace std;

int Selectionsort(int vetor[], int n){

int i, j, menor, aux;

for(i = 0; i<n-1; i++){

    menor = i;
    for (j=i+1; j <n; j++){

        if(vetor[j] < vetor[menor]){
            menor = j;
        }
    }
    aux = vetor[i];
    vetor[i] = vetor[menor];
    vetor[menor] = aux;

}

}


int main(){

int vetor[] = {70,90,1,3,0,100,2};
int n = sizeof(vetor)/sizeof(int);
Selectionsort(vetor, n);

for (int i =0; i< n; i++){
    cout << vetor[i] << " ";
}



}
