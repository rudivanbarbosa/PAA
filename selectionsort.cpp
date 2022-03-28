#include <stdlib.h>
#include <stdio.h>


int selectionsort(int vetor[], int n){

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

int vetor[7] = {70,90,1,3,0,100,2};
selectionsort(vetor, 7);

for (int i =0; i<7; i++){

    printf("%d ", vetor[i]);


}



}
