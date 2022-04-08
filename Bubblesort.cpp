#include <iostream>

using namespace std;

BubbleSort( int vetor[], int n){

 for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
    if(vetor[i] <= vetor[j]){
        swap(vetor[i], vetor[j]);
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
