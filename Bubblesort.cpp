#include <iostream>

using namespace std;

BubbleSort( int vetor[], int n){

 for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
    int aux;
    if(vetor[i] <= vetor[j]){
        aux = vetor[j];
        vetor[j] = vetor[i];
        vetor[i] = aux;
    }
        }
            }

for(int i=0; i<n; i++){

    cout << vetor[i] << " ";
}

}


int main(){

int vetor[] = {100,15,27,3,47,65};
int n = sizeof(vetor)/sizeof(int);

BubbleSort(vetor, n);

}
