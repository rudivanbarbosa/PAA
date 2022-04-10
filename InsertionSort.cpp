#include <iostream>
#include <algorithm>


using namespace std;


void InsertionSort(int vetor[], int n){
    int i, j, eleito;

    for (int i = 0; i < n; i++ ){

        eleito = vetor[i];
        j = i-1;
        while(j >= 0 && vetor[j]  > eleito ){
            vetor[j+1] = vetor[j];
            j = j-1;

        }
        vetor[j+1] = eleito;

    }

for(i = 0; i < n; i++){
    cout << vetor[i] << " ";
}

}

int main(){

int vetor[] = {8,7,3,2,1,6,0,10,11,18,4};
int n = sizeof(vetor)/sizeof(int);

InsertionSort(vetor, n);









}
