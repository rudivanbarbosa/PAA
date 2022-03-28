#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main(){
setlocale(LC_ALL,"Portuguese");


    int n;
    printf("Qual a quantidade de números? ");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i++){
    printf("Digite o número da posição %d: ", i+1);
    scanf("%d", &vetor[i]);
            }
int x;
printf("Para ordenar em ordem crescente digite 1. Para ordem decrescente digite 2:  ");
scanf("%d", &x);
switch (x){

case 1:
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
printf("vetor[%d] = %d \n", i+1, vetor[i] );}
break;

case 2:
 for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
    int aux;
    if(vetor[i] >= vetor[j]){
        aux = vetor[j];
        vetor[j] = vetor[i];
        vetor[i] = aux;
    }
        }
            }
for(int i=0; i<n; i++){
printf("vetor[%d] = %d \n", i+1, vetor[i] );}
break;



}

}
